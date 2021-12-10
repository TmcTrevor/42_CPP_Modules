#include "Contact.hpp"
#include "PhoneBook.hpp"

void	empty_input(void)
{
	if (std::cin.eof())
	{
		std::cout << "\n 📕 BYE (´^ω^)ノ\n";
		exit(0);
	}
}

int main()
{
	PhoneBook phonebook;
	string cmd;
	Cout << "Available commands : ADD --- SEARCH --- EXIT\n" << Endl;
	while (1)
	{
		phonebook.promt();
		std::getline(std::cin, cmd);
		empty_input();
		if (cmd == "ADD")
			phonebook.add();
		else if (cmd == "SEARCH")
			phonebook.search();
		else if (cmd == "EXIT")
		{
			Cout << "📕 BYE (´^ω^)ノ\n";
			exit(0);
		}
	}
}