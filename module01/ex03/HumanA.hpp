#include "Weapon.hpp"

class HumanA
{
	private:
		string name;
		Weapon &a;
	public:
		HumanA(string name, Weapon& a);
		~HumanA();
		void	attack() const;
		void	setWeapon(Weapon& a);
};