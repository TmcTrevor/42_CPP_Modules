#include "Brain.hpp"

Brain::Brain()
{
    Cout << GREEN << "[ BRAIN ] default constructor " << DEFAULT << Endl;
    for (int i = 0; i < 100;i++)
        ideas[i] = "idea " + std::to_string(i);
}

Brain::~Brain()
{
    Cout << RED << "[ BRAIN ] Constructor called" << DEFAULT << Endl;
}

Brain::Brain(const Brain& a)
{
    for (int i = 0; i < 100; i++)
        ideas[i] = a.ideas[i];
    Cout << BLUE << "[ BRAIN ] copy Contructor called " << DEFAULT << Endl;
}

Brain& Brain::operator=(const Brain& a)
{
    for (int i = 0; i < 100; i++)
        ideas[i] = a.ideas[i];
    Cout << BLUE << "[ BRAIN ] copy Contructor called " << DEFAULT << Endl;
    return *this;
}

