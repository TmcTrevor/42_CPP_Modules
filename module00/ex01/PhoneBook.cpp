
#include "PhoneBook.hpp"
#include "Contact.hpp"

int PhoneBook::nb_contact = -1;
int PhoneBook::last = -1;

void PhoneBook::promt()
{
	std::cout << "📖 Choose a command > ";
}

Contact& PhoneBook::get_contact(int index)
{
    return (contacts[index]);
}

int		PhoneBook::get_total_count() // is member to acces static members
{
	nb_contact++;
	if (nb_contact > 7)
		last = 7;
	else
		last = nb_contact;
	return (nb_contact);
}

void	PhoneBook::add()
{
	int i;

	i = get_total_count();
	i %= 8;
	contacts[i] = setup_contact();
}
string	lenght_check(string str)
{
	if (str.length() > 10)
	{
		str = str.substr(0, 10);
		str[9] = '.';
	}
	return str;
}
void	print_border()
{
	Cout << WHITE << setw(10) << "index" << DEFAULT << "|";
	Cout << BLUE << setw(10) << "fname" << DEFAULT << "|";
	Cout << RED << setw(10) << "lname"<< DEFAULT << "|";;
	Cout << YELLOW << setw(10) << "nickname" << DEFAULT << "|" << Endl;
}
void	PhoneBook::search()
{
	string s;
	int index;
	//Cout << nb_contact <<Endl;
	index = -1;
	print_border();
	if (nb_contact == -1)
		Cout << RED << "EMPTY PHONEBOOK , ADD Contacts to view more" << DEFAULT << Endl;
	else
	{
		for (int i = 0; i <= 7 ; i++)
		{
			Cout << WHITE << setw(10) << i << DEFAULT << "|";
			s = contacts[i].get_fname();
			s = lenght_check(s);
			Cout << BLUE << setw(10) << s << DEFAULT << "|";
			s = contacts[i].get_lname();
			s = lenght_check(s);
			Cout << RED << setw(10) << s << DEFAULT << "|";;
			s = contacts[i].get_nkname();
			s = lenght_check(s);
			Cout << YELLOW << setw(10) << s << DEFAULT << "|";
			Cout << Endl;
			}
		Cout << "Choose index to fully view all information : ";
		while (index < 0 || index > nb_contact)
		{
			Cin >> index;
			Cin.ignore();
			if (index > 0 && index <= nb_contact)
				break ;
			empty_input();
			Cout << "please enter an index between 0 && " << nb_contact << ": ";
		}
		//print_border();
		Cout << WHITE << "index : " << index << DEFAULT << Endl;
		s = contacts[index].get_fname();
		Cout << BLUE  << "first name : " << s << DEFAULT << Endl;
		s = contacts[index].get_lname();
		Cout << RED << "last name : " << s << DEFAULT << Endl;;
		s = contacts[index].get_nkname();
		Cout << YELLOW << "nickname : " << s << DEFAULT << Endl;
		Cout << PURPLE << "dark secret : " << contacts[index].get_pn() << DEFAULT << Endl;
		Cout << PURPLE << "phone number : " << contacts[index].get_ds() << DEFAULT << Endl;
	}
	// Cout << Endl;
	
}