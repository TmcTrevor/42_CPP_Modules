#include <iostream>
#include <iomanip>
# include <string>
#include <ctime>

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


int main()
{
	string a = "HI THIS IS BRAIN";
	string *stringPTR = &a;
	string& stringREF = a;

	Cout << RED << &a << DEFAULT <<Endl;
	Cout << GREEN << stringPTR << DEFAULT <<Endl; 
	Cout << BLUE << &stringREF << DEFAULT <<Endl;
	Cout << WHITE << "----------------------" << DEFAULT <<Endl;
	Cout << RED << a << DEFAULT <<Endl;
	Cout << GREEN << *stringPTR << DEFAULT <<Endl; 
	Cout << BLUE << stringREF << DEFAULT <<Endl;

}