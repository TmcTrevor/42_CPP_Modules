#include "Cure.hpp"

Cure::Cure(string name)
{
    type = name;
     Cout << GREEN << " [ Cure ] string constructor called " << DEFAULT << Endl;
}

Cure::Cure()
{
    type = "Cure";
    Cout << GREEN << " [ Cure ] default constructor called " << DEFAULT << Endl;
}

Cure::Cure(const Cure& a)
{
    type = a.type;
    Cout << BLUE << " [Cure ] Copy constructor called " << DEFAULT << Endl;
}

Cure Cure::operator=(const Cure& a)
{
    type = a.type;
    return (*this);
}

AMateria* Cure::clone() const
{
    AMateria *j = new Cure();
    return (j);
}
void   Cure::use(ICharacter& target)
{
    Cout << YELLOW << "heals " << target.getName() <<"'s wounds" << DEFAULT << Endl;
}