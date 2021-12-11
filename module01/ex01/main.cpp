#include "Zombie.hpp"

int main()
{
	Zombie *a;
	a = zombieHorde(10,"Night king");
	if (!a)
		return (1);
	delete [] a;
	return (0);
}