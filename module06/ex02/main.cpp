#include "Base.hpp"


Base *generate(void)
{
    Base *a;
    srand(time(0));
    int i = rand() % 9;
    if (i % 3 == 0)
        a = new A();
    if (i % 3 == 1)
        a = new B();
    else
        a = new C();
    return (a);
}
void identify(Base* p)
{

}
void identify(Base& p)
{

}

int main()
{
    Base *s;
    A *a;
    B *b;
    C *c;
    s = new A();
    a = new A();
    b = new B();
    c = new C();
     try {
        if (dynamic_cast<B*>(s))
            cout << 'A';
        else
            cout << "Error" << endl;
     }
    catch (exception& e) {
        cout << e.what() << endl;
    }

}