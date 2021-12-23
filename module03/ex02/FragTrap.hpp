#ifndef _FRAGTRAP_HPP
#define _FRAGTRAP_HPP
#include "ClapTrap.hpp"


class FragTrap : public ClapTrap
{
    private:

    public:
        FragTrap();
		~FragTrap();
		FragTrap(string a);
		FragTrap(const FragTrap& c);
		FragTrap& operator=(const FragTrap& c);
};

#endif


