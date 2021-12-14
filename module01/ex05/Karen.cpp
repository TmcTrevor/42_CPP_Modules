#include "Karen.hpp"

void	Karen::debug()
{
	Cout << WHITE << "[ DEBUG ]" << DEFAULT << Endl;
	Cout << RED << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << DEFAULT << Endl;
}

void	Karen::info()
{
	Cout << WHITE << "[ INFO ]" << DEFAULT << Endl;
	Cout << GREEN << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << DEFAULT << Endl;
}

void	Karen::warning()
{
	Cout << WHITE << "[ WARNING ]" << DEFAULT << Endl;
	Cout << BLUE << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << DEFAULT << Endl;
}

void	Karen::error()
{
	Cout << WHITE << "[ ERROR ]" << DEFAULT << Endl;
	Cout << YELLOW << "This is unacceptable, I want to speak to the manager now." << DEFAULT << Endl;
}

void	Karen::complain( string level)
{
	string str[4];
	str[0] = "DEBUG";
	str[1] = "INFO";
	str[2] = "WARNING";
	str[3] = "ERROR";

	void (Karen::*p[4]) ();
		p[0] = &Karen::debug;
		p[1] = &Karen::info;
		p[2] = &Karen::warning;
		p[3] = &Karen::error;
	int i;
	for (i = 0; i < 4; i++)
	{
		if (level == str[i])
			break;
	}
	(this->*p[i])();
	// switch(i)
	// {
	// 	case 0 :
	// 		debug();
	// 		break;
	// 	case 1 :
	// 		info();
	// 		break;
	// 	case 2 :
	// 		warning();
	// 		break;
	// 	case 3 :
	// 		error();
	// 		break;
	// 	default :
	// 		Cout << RED << "NO such a level" << DEFAULT << Endl;
	// }
}