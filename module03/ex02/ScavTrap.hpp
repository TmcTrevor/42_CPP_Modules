#ifndef _SCAVTRAP_HPP
#define _SCAVTRAP_HPP

#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap
{
    private :

    public:
        ScavTrap();
		~ScavTrap();
		ScavTrap(string a);
		ScavTrap(const ScavTrap& c);
		ScavTrap& operator=(const ScavTrap& c);
		void attack(string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		string get_Name() const;
		int	get_Hitpoints() const;
		int get_EnergyPoint() const;
		int get_attackdmg() const;
        void  guardGate();
     
};
std::ostream&	operator<<(std::ostream &os, const ScavTrap &s);
#endif // _SCAVTRAP_HPP

