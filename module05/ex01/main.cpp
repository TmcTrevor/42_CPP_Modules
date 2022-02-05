#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include <cmath>

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    string h = "General";
    try 
    {
        Bureaucrat a(h, 2);
        Form b("form1", 1, 1);
        Cout << b;
        b.BeSigned(a);
        Cout << b;
    }
    catch (std::exception &e)
    {
        Cout << RED << e.what() << DEFAULT <<Endl;
    }
}