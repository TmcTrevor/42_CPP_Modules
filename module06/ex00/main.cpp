#include <iostream>
#include <string>
#include <iomanip> 
#define RESET   	"\033[0m"
#define WHITE   	"\033[37m"
#define RED     	"\033[31m"

void    convert_to_int(double f, char *argv)
{
    int a = static_cast<int>(f);
    atoi(argv);
    if (errno)
        std::cout << "int : impossible convertion" << std::endl;
    else
        std::cout << "int : " << a << std::endl;

}

void convert_to_char(double f, char *argv)
{
    char c;

    c = static_cast<char>(f);
   
    if (!isprint(c))
    {
        if (strlen(argv) != 1)
            std::cout << "char : impossible convertion" << std::endl;
        else
            std::cout << "char : Non displayable " << c << std::endl;
    }
    else
        std::cout << "char : " << c << std::endl;
}
void	print_error(void)
{
	std::cout << RED;
	std::cerr << "char	: impossible" << std::endl;
	std::cerr << "int	: impossible" << std::endl;
	std::cerr << "float	: impossible" << std::endl;
	std::cerr << "double	: impossible" << std::endl;
	exit (1);
}
int  main(int ac, char  **argv)
{
    //float i = 2;
    if (ac != 2)
    {
        std::cerr << "Error : wrong number of arguments" << std::endl;
        return (1);
    }
    double d = atof(argv[1]);
    if (!d && argv[1][0] != '0')
	if (argv[1][0]!= '+' && argv[1][0] != '-')
			print_error(); 
    convert_to_char(d, argv[1]);
   convert_to_int(d,argv[1]);
  
   float f = static_cast<float>(d);
   std::cout << std::fixed << std::setprecision(1);
   std::cout << "float	: " << f << "f" << std::endl;
    std::cout << "double	: " << d << std::endl;
    // char a = static_cast<char>(d);
    // int e = static_cast<int>(d);
    // atoi(argv[1]);
    // if (errno)
    //     cout << "Error: " << errno << endl;
    // else
    //     cout << e << endl;
    // cout << a << endl;
}