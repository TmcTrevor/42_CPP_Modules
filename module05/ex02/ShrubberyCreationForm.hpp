#ifndef _SHRUBBERYCREATIONFORM_HPP
#define _SHRUBBERYCREATIONFORM_HPP
#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include <exception>
#include <cmath>
#include "Form.hpp"

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

class ShrubberyCreationForm : public Form
{
    public :

        ShrubberyCreationForm(void);
		ShrubberyCreationForm(string const &target);
		ShrubberyCreationForm(ShrubberyCreationForm const &src);
		ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &rhs);
		void	creat_Shrubbery(void) const;
		void execute(Bureaucrat const & executer) const;
		~ShrubberyCreationForm(void);
};

#endif