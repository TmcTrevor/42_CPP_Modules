#include "Base.hpp"


Base *generate(void)
{
    Base *a;
    static int k = 0;
    srand(time(0));
    int i = rand() + k++;
    if (i % 3 == 0)
        a = new A();
    else if (i % 3 == 1)
        a = new B();
    else
        a = new C();
    return (a);
}
void identify(Base* p)
{
    cout << YELLOW <<"identify by pointer : " << RESET;
    if (dynamic_cast<A*>(p))
        cout << YELLOW <<  "A" << RESET << endl;
    else if (dynamic_cast<B*>(p))
        cout <<  YELLOW << "B" << RESET << endl;
    else if (dynamic_cast<C*>(p))
        cout << YELLOW << "C" << RESET << endl;
    else
        cout << "Not one of the derived classes" << endl;
}
void identify(Base& p)
{
    cout << GREEN<< "identify by address : " <<  RESET;
    try {
        (void)dynamic_cast<A&>(p);
        cout << GREEN << "A" << RESET << endl;
    }
    catch (const exception&e)
    {
        try {
            (void)dynamic_cast<B&>(p);
            cout << GREEN << "B" << RESET << endl;
        }
        catch (const exception&e)
        {
            try {
                (void)dynamic_cast<C&>(p);
                cout << GREEN <<  "C" << RESET << endl;
            }
            catch (const exception&e)
            {
                cout << RED << "Not one of the derived classes" << endl;
            }
        }
    }
}

int main()
{
    Base *s;
    // A *a;
    // B *b;
    // C *c;
    Base &q = *generate();
    srand(time(0));
    s = generate();
    // a = new A();
    // b = new B();
    // c = new C();
    // s = new A();
    identify(s);
    identify(q);
    delete s;
    delete &q;
    return (0);
}