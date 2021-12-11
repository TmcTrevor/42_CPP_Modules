#include "Zombie.hpp"

int main()
{
	Zombie a("Night king");
	Zombie *b = newZombie("Sobbing Zombie");
	if (!b)
		return (1);
	randomChump("Shrieker");
	delete b;
	return (0);
}