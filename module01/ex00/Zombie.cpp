#include "Zombie.hpp"

Zombie::Zombie(string name)
{
	this->name = name;
	announce();
}

Zombie::~Zombie()
{
	Cout << RED << "Zombie " << name << " died" << DEFAULT << Endl; 
}

void	Zombie::announce(void)
{
	Cout << GREEN << name << " BraiiiiiiinnnzzzZ ..." << DEFAULT <<Endl;
}

