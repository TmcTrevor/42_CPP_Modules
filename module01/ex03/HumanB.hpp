#include "Weapon.hpp"

class HumanB
{
	private:
		string name;
		Weapon *b;
	public:
		HumanB(string name);
		~HumanB();
		void	attack() const;
		void	setWeapon(Weapon& b);
};