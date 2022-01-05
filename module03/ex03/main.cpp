#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap a("Daruis");
    DiamondTrap b("yasuo");
    DiamondTrap c;
    c = b;
    a.attack(b.get_Name());
    b.takeDamage(a.get_attackdmg());
    b.beRepaired(10);
    a.highFiveGuys();
    Cout << a << Endl << b << Endl << c << Endl;
}
// int             main(void)
// {
//         ClapTrap        p1("player_1");
//         ClapTrap        p2("player_2");

//         Cout << "\n######Testing a player from ClapTrap class :#######\n" << Endl;
//         p1.attack(p2.get_Name());
//         p2.takeDamage(120);
//         p2.beRepaired(200);
//        Cout << p1 << Endl << p2 << Endl;

//         Cout << "\n######Testing a player from FragTrap class :#######\n" << Endl;

//         ScavTrap        p3("player_3");
//         p3.attack(p1.get_Name());
//         p3.takeDamage(12);
//         p3.beRepaired(25);
//         p3.guardGate();
//        Cout << p3 << Endl;

//         Cout << "######Print the player after setting its informations :#######" << Endl;

//       //Cout << a << Endl << b << Endl;
//         return (0);
// }