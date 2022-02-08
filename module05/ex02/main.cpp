#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include <cmath>

//#include "Bureaucrat.hpp"
//#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    string h = "General";
    try 
    {
        Bureaucrat c(h, 1);
        ShrubberyCreationForm a("rip");
        RobotomyRequestForm b("robot");
        PresidentialPardonForm d("zaphod");

        Cout << a;
        Cout << b;
        Cout << d;
       a.BeSigned(c);
        b.BeSigned(c);
        d.BeSigned(c);
        // Cout << a;
        // Cout << b;
        // Cout << d;
        // a.execute(c);
        c.executeForm(d);
        // d.execute(c);
    }
    catch (std::exception &e)
    {
        Cout << RED << e.what() << DEFAULT <<Endl;
    }
}