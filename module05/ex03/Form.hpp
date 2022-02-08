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

class bureaucrat;

class Form
{
    private:
        string Name;
        bool signd;
        const int signgrade;
        const int execgrade;
        string Target;
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
        Form(string name, int signgrade, int execgrade, string target);
        Form(const Form& other);

        /* Getters */
        bool getsign() const;
        string getName() const;
        int getSigngrade() const;
        int getExecgrade() const;
        string getTarget() const;
        /*******************************/
        /******* Setters ************/
        void setSign(bool sign);
        void setName(string name);
        void setTarget(string target);
        /*****************************/
        Form& operator=(const Form& other);
        virtual ~Form();
        virtual bool BeSigned(Bureaucrat const  &c);
        virtual  void execute(Bureaucrat const  &executer) const = 0;
};

std::ostream& operator<<(std::ostream& os, const Form& a);
#endif