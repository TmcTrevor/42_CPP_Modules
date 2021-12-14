#include <iostream>
#include <iomanip>
# include <string>
#include <ctime>
#include <fstream>

# define	string std::string
# define	Cout std::cout
# define	Cin std::cin
# define	Endl std::endl
# define	setw std::setw
# define	fstream std::fstream
# define	ifstream std::ifstream
# define	ofstream std::ofstream

# define 	Getline 	std::getline
# define 	GREEN 		"\e[1;32m"
# define 	RED 		"\e[1;31m"
# define 	WHITE 		"\e[1;37m"
# define 	YELLOW 	"\e[1;33m"
# define 	BLUE 		"\e[1;34m"
# define 	PURPLE 	"\033[1;35m"
# define 	DEFAULT	"\e[0;37m"

void	ft_replace(string &output, string s1, string s2)
{
	size_t i, j, k;

	k = 0;
	i = s1.length();
	j = s2.length();
	while ((k = output.find(s1, k)) != string::npos)
	{
		output.erase(k, i);
		output.insert(k, s2);
		k += j;
	}
}

int check_error(ifstream& file, string s1, string s2)
{
	if (!file.good())
	{
		Cout << RED << "no such file" << DEFAULT << Endl;
		return (0);
	}
	if (file.peek() ==  EOF)
	{
		Cout << RED << "Empty file" << DEFAULT << Endl;
		return (0);
	}
	if (!s1.length() || !s2.length())
	{
		Cout << RED << "Empty strings" << DEFAULT << Endl;
		return (0);
	}
	return (1);
}
int main(int ac, char **argv)
{
	string output;
	
	string frep;
	string name = ".replace";
	if (ac == 4)
	{
		frep = argv[1] + name;
		ifstream file(argv[1]);
		if (!check_error(file, argv[1], argv[2]))
		{
			file.close();
			return (1);
		}
		ofstream repfile(frep);
		while(Getline(file, output))
		{
			ft_replace(output, argv[2], argv[3]);
			repfile << output << Endl;
		}
		file.close();
		repfile.close();
	}
	else
		Cout << RED << "Wrong number of arguments" << DEFAULT << Endl;
}