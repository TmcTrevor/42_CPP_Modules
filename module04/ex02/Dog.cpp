#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    dogBrain = new Brain();
    Cout << GREEN << "[ Dog ] Call to default constructor" << DEFAULT << Endl;
}

Dog::~Dog()
{
    delete dogBrain;
     Cout << RED << " [ Dog ] Call to the destructor" << DEFAULT << Endl;
}

Dog::Dog(const Dog &a)
{
    this->type = a.type;
    Cout << BLUE << "[ Dog ] Call to Copy constructor" << DEFAULT << Endl;
}

Dog::Dog(string a)
{
    this->type = a;
    Cout << GREEN << "[ Dog ] Call to string constructor" << DEFAULT << Endl;
}

Dog& Dog::operator=(const Dog& a)
{
    this->type = a.type;
    Cout << GREEN << " [ Dog ] Call to Assignment Operator " << DEFAULT << Endl;
    return *this;
}

void Dog::makeSound() const
{
    Cout << YELLOW << "woef woef woef" << DEFAULT << Endl;
}