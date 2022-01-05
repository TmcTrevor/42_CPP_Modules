#include "Animal.hpp"

Animal::Animal()
{
    type = "Random ANIMAL";
    Cout << GREEN << "Call to default constructor" << DEFAULT << Endl;
}

Animal::~Animal()
{
     Cout << RED << "Call to the destructor" << DEFAULT << Endl;
}

Animal::Animal(const Animal &a)
{
    this->type = a.type;
    Cout << BLUE << "Call to Copy constructor" << DEFAULT << Endl;
}

Animal::Animal(string a)
{
    this->type = a;
    Cout << GREEN << "Call to string constructor" << DEFAULT << Endl;
}

Animal& Animal::operator=(const Animal& a)
{
    this->type = a.type;
    Cout << GREEN << "Call to Assignment Operator " << DEFAULT << Endl;
    return *this;
}

string  Animal::getType() const
{
    return (type);
}

void Animal::setType(string &type)
{
    this->type = type;
}