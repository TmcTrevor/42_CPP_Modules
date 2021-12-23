#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("Daruis");
    ClapTrap b("yasuo");
    a.attack(b.get_Name());
    b.takeDamage(a.get_attackdmg());
    b.beRepaired(10);
    Cout << a << Endl << b << Endl;
}