#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include <cmath>

#include "Bureaucrat.hpp"
//#include "Form.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    string s = "leona";
    Bureaucrat	B(s, 1);
	Intern someRandomIntern;
	Form* rrf[4];
	rrf[0] = someRandomIntern.makeForm("PresidentialPardonForm", "Bender");
	rrf[1] = someRandomIntern.makeForm("RobotomyRequestForm", "42");
	rrf[2] = someRandomIntern.makeForm("ShrubberyCreationForm", "1337");
	rrf[3] = someRandomIntern.makeForm("PresiddonForm", "1337");
	Cout << RED << "\nSign diffrents forms by Elona:" << DEFAULT << Endl;
    //Cout << *rrf[0] << Endl;
    rrf[0]->BeSigned(B);
    rrf[1]->BeSigned(B);
    rrf[2]->BeSigned(B);
    B.executeForm(*rrf[0]);
	B.executeForm(*rrf[1]);
	B.executeForm(*rrf[2]);
    Cout << *rrf[0] << Endl;
    delete rrf[0];
	delete rrf[1];
	delete rrf[2];
    return (0);
}