#ifndef _AMATERIA_HPP
#define _AMATERIA_HPP
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

#include "ICharacter.hpp"

class AMateria
{
    protected:
        string type;
    public :
        AMateria();
        AMateria(string const &  type);
        virtual ~AMateria();
        string const &getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif