#ifndef _DIAMONDTRAP_HPP
#define _DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"


class DiamondTrap : public FragTrap, public ScavTrap
{
    private:
    
    public:
      DiamondTrap();
		~DiamondTrap();
		DiamondTrap(string a);
		DiamondTrap(const DiamondTrap& c);
		DiamondTrap& operator=(const DiamondTrap& c);
		void	attack(string const &a);
		void 	takeDamage(unsigned int damage);
		void	beRepaired(unsigned int amount);

};
std::ostream&	operator<<(std::ostream &os, const DiamondTrap &s);

#endif

