#include "Zombie.hpp"

Zombie* newZombie( string name)
{
	Zombie *Z = new Zombie(name);
	return Z;
}