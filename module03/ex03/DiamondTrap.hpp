#ifndef _DIAMONDTRAP_HPP
#define _DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"


class DiamondTrap : public FragTrap, public ScavTrap
{
    private:
		string Name;
    public:
      DiamondTrap();
		~DiamondTrap();
		DiamondTrap(string const  &a);
		DiamondTrap(const DiamondTrap& c);
		DiamondTrap& operator=(const DiamondTrap& c);
		void	attack(string const &a);
		void 	takeDamage(unsigned int damage);
		void	beRepaired(unsigned int amount);
		string	getName_diamond(void) const;
		void	setName_diamond(string const & name);
		int			get_Hitpoints() const;
		int 		get_EnergyPoint() const;
		int 		get_attackdmg() const;
		void	whoAmI();

};
std::ostream&	operator<<(std::ostream &os, const DiamondTrap &s);

#endif

