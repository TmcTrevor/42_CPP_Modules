#ifndef _ClapTrap_HPP
#define	_ClapTrap_HPP
#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include <cmath>

# define	string std::string
# define	Cout std::cout
# define	Cin std::cin
# define	Endl std::endl
# define	setw std::setw
# define 	Getline 	std::getline
# define 	GREEN 		"\e[1;32m"
# define 	RED 		"\e[1;31m"
# define 	WHITE 		"\e[1;37m"
# define 	YELLOW 	"\e[1;33m"
# define 	BLUE 		"\e[1;34m"
# define 	PURPLE 	"\033[1;35m"
# define 	DEFAULT	"\e[0;37m"

class ClapTrap
{
    protected :
        string  Name;
        int		Hitpoints;
		int		EnergyPoints;
		int		attackdmg;
	public :
		ClapTrap();
		~ClapTrap();
		ClapTrap(string a);
		ClapTrap(const ClapTrap& c);
		ClapTrap& operator=(const ClapTrap& c);
		void attack(string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		string get_Name() const;
		int	get_Hitpoints() const;
		int get_EnergyPoint() const;
		int get_attackdmg() const;
};

std::ostream&	operator<<(std::ostream &os, const ClapTrap &s);

#endif