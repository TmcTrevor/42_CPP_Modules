#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    Cout << GREEN << "[ Cat ] Call to default constructor" << DEFAULT << Endl;
}

Cat::~Cat()
{
     Cout << GREEN << " [ Cat ] Call to the destructor" << DEFAULT << Endl;
}

Cat::Cat(const Cat &a)
{
    this->type = a.type;
    Cout << BLUE << "[ Cat ] Call to Copy constructor" << DEFAULT << Endl;
}

Cat::Cat(string a)
{
    this->type = a;
    Cout << GREEN << "[ Cat ] Call to string constructor" << DEFAULT << Endl;
}

Cat& Cat::operator=(const Cat& a)
{
    this->type = a.type;
    Cout << GREEN << " [ Cat ] Call to Assignment Operator " << DEFAULT << Endl;
    return *this;
}

void Cat::makeSound() const
{
    Cout << YELLOW << "MEOW MEOW MEOW" << DEFAULT << Endl;
}