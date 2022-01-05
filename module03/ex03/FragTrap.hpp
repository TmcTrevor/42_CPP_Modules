#ifndef _FRAGTRAP_HPP
#define _FRAGTRAP_HPP
#include "ClapTrap.hpp"


class FragTrap : public virtual ClapTrap
{
    private:

    public:
        FragTrap();
		~FragTrap();
		FragTrap(string a);
		FragTrap(const FragTrap& c);
		FragTrap& operator=(const FragTrap& c);
		void	attack(string const &a);
		void 	takeDamage(unsigned int damage);
		void	beRepaired(unsigned int amount);
		int	get_Hitpoints() const;
		int get_EnergyPoint() const;
		int get_attackdmg() const;
		void	highFiveGuys(void);



};
std::ostream&	operator<<(std::ostream &os, const FragTrap &s);
#endif


