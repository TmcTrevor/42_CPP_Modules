#include "HumanA.hpp"

HumanA::HumanA(string name, Weapon& b) : a(b)
{
	this->name = name;
	Cout << BLUE << "Human " << name << " Created with Weapon " << a.get_name() << DEFAULT << Endl;
}

HumanA::~HumanA()
{
	Cout << RED << "Human A destroyed" << DEFAULT << Endl;
}

void HumanA::attack() const
{
	Cout << YELLOW << "Human " << name << " attacks with " << a.get_name() << DEFAULT << Endl;
}

void HumanA::setWeapon(Weapon &a)
{
	this->a = a;
	Cout << WHITE << "Weapon of " << name << " is set to " << a.get_name() << DEFAULT << Endl;
}