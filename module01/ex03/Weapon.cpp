#include "Weapon.hpp"

Weapon::Weapon()
{
	weaponName = "";
}

Weapon::Weapon(string name)
{
	weaponName = name;
	Cout << GREEN << "Weapon " << name << " Created " << DEFAULT << Endl;
}

Weapon::~Weapon()
{
	Cout << RED << "Weapon " << weaponName << " destroyed " << DEFAULT << Endl;
}

const string& Weapon::get_name()
{
		return (weaponName);
}

void	Weapon::setType(string type)
{
	weaponName = type;
	Cout << WHITE << "Weapon name is set to " << weaponName << DEFAULT << Endl;
}