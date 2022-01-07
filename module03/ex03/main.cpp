#include "DiamondTrap.hpp"

int		main(void)
{
	DiamondTrap	obj("Daruis");

	Cout << "\nClaptrap Name : " << obj.get_Name() << Endl;
	Cout << "Diamond Name : " << obj.getName_diamond() << Endl;
	Cout << "Hit points : " << obj.get_Hitpoints() << Endl;
	Cout << "Energy points : " << obj.get_EnergyPoint() << Endl;
	Cout << "Attack damage : " << obj.get_attackdmg() << Endl << Endl;
	obj.attack("YASUO");
	obj.FragTrap::highFiveGuys();
	obj.ScavTrap::guardGate();
	obj.whoAmI();
	return (0);
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