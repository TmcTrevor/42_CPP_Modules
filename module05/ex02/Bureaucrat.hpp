#ifndef _BUREAUCRAT_HPP
#define _BUREAUCRAT_HPP
#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include <exception>
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

class Form;

class Bureaucrat
{
    private:
        string Name;
        int Grade;
    public :
        class GradeTooLowException: public std::exception
        {
            const char* what() const throw();
        };
        class GradeTooHighException: public std::exception
        {
            const char* what() const throw();
        };
        Bureaucrat();
        Bureaucrat(string &name, int grade);
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat &c);
        Bureaucrat operator=(const Bureaucrat &c);
        string getName() const;
        int getGrade() const;
        void IncrementGrade();
        void DecrementGrade();
        void executeForm(Form const &form) const;
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &c);
#endif