#include "Ice.hpp"

Ice::Ice(string name)
{
    type = name;
     Cout << GREEN << " [ ICE ] string constructor called " << DEFAULT << Endl;
}

Ice::Ice()
{
    type = "ice";
    Cout << GREEN << " [ ICE ] default constructor called " << DEFAULT << Endl;
}

Ice::Ice(const Ice& a)
{
    type = a.type;
    Cout << BLUE << " [ICE ] Copy constructor called " << DEFAULT << Endl;
}

Ice Ice::operator=(const Ice& a)
{
    type = a.type;
    return (*this);
}

AMateria* Ice::clone() const
{
    AMateria *j = new Ice();
    return (j);
}

void   Ice::use(ICharacter& target)
{
    Cout << YELLOW << "shoots an ice bolt at " << target.getName() << DEFAULT << Endl;
}