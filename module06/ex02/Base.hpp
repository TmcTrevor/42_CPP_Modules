#ifndef BASE_HPP
#define BASE_HPP

#include <string>
#include <ctype.h>
#include <iostream>
#include <exception>
#define RESET   	"\033[0m"
#define WHITE   	"\033[37m"
#define RED     	"\033[31m"
#define MAGENTA 	"\033[35m"
#define 	GREEN 		"\e[1;32m"
# define 	YELLOW 	"\e[1;33m"
#define cout		std::cout
#define cerr		std::cerr
#define endl		std::endl
#define atof		std::atof
#define fixed		std::fixed
#define string		std::string
#define	exception	std::exception

class Base
{
  public:
    virtual ~Base(void);
};

class A : public Base{};
class B : public Base{};
class C : public Base{};
#endif