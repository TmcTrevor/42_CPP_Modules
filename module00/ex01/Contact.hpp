#ifndef _CONTACT_HPP
#define	_CONTACT_HPP
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


class Contact
{
	private:
		string Fname;
		string lname;
		string nkname;
		string dsecret;
		string pnumber;
	public:
		void set(string fn, string ln, string nkn, string nb , string ds);
		string get_fname();
		string get_lname();
		string get_nkname();
		string get_ds();
		string get_pn();

};

Contact		setup_contact();
void		empty_input(void);

#endif
