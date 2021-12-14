#include "HumanB.hpp"

HumanB::HumanB(string name)
{
	this->name = name;
	this->b = NULL;
	Cout << BLUE << "Human " << name << " Created " << DEFAULT << Endl;
}

HumanB::~HumanB()
{
	Cout << BLUE << "Human " << name << " Destroyed " << DEFAULT << Endl;
}

void HumanB::attack() const
{
	if (b)
		Cout << YELLOW << "Human " << name << " attacks with " << b->get_name() << DEFAULT << Endl;
	else
		Cout << YELLOW << "Human " << name << " can't attack has no weapon" << DEFAULT << Endl;
}

void HumanB::setWeapon(Weapon& z)
{
	b = &z;
	Cout << WHITE << "Weapon of " << name << " is set to " << b->get_name() << DEFAULT << Endl;
}