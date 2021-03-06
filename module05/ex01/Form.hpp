 #ifndef _FORM_HPP
#define _FORM_HPP
#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include <exception>
#include <cmath>
#include "Bureaucrat.hpp"

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



class Form
{
    private:
        string Name;
        bool signd;
        const int signgrade;
        const int execgrade;
    public :
        class GradeTooLowException: public std::exception
        {
            const char* what() const throw();
        };
        class GradeTooHighException: public std::exception
        {
            const char* what() const throw();
        };
        Form();
        Form(string name, int signgrade, int execgrade);
        Form(const Form& other);
        bool getsign() const;
        string getName() const;
        int getSigngrade() const;
        int getExecgrade() const;
        Form& operator=(const Form& other);
        ~Form();
        virtual bool BeSigned(const Bureaucrat &c);
};

std::ostream& operator<<(std::ostream& os, const Form& a);
#endif