#include "Karen.hpp"

int	main(int ac, char **av)
{
	Karen	karen;

	if (ac == 2)
		karen.complain(av[1]);
	else
		Cout << RED << "Karen can't take more than 1 argument :(" << DEFAULT << Endl;
	// karen.complain("DEBUG");
	// karen.complain("ERROR");
	// karen.complain("WARNING");
	return (0);
}