#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include <cmath>

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    // int a = 1000;
    // try {
    //     if (a == 100)
    //         throw "fuck";
    //     else
    //         std::cout << "nop" << std::endl;
    // }
    // catch (const char *s)
    // {
    //     std::cout << "asdasd " << s << std::endl;
    // }
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