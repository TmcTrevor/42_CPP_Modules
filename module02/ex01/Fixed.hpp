#ifndef _FIXED_HPP
#define	_FIXED_HPP
#include <iostream>
#include <iomanip>
#include <string>
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


class Fixed
{
	private :
		int fixed_v;
		static const int  nb_bits;
	public :
		Fixed();
		~Fixed();
		Fixed(const int a);
		Fixed(const Fixed &f);
		Fixed operator = (Fixed const &f);
		int getRawBits(void) const;
		void setRawBits(int const raw);

};

#endif