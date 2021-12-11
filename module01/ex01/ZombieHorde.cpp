#include "Zombie.hpp"

Zombie* zombieHorde( int N, string name )
{
	Zombie *king = new Zombie[N];
	for( int i = 0; i < N; i++ )
	{
		king[i].setname(name + " " + std::to_string(i));
		king[i].announce();
	}
	return king;
}