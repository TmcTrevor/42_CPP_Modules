#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include <cmath>

int main()
{
    int a = 1000;
    try {
        if (a == 100)
            throw "fuck";
        else
            std::cout << "nop" << std::endl;
    }
    catch (const char *s)
    {
        std::cout << "asdasd " << s << std::endl;
    }
}