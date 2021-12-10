#include "Contact.hpp"

void Contact::set(string fn, string ln, string nkn, string nb , string ds)
{
	Fname = fn;
	lname = ln;
	nkname = nkn;
	pnumber = nb;
	dsecret = ds;
}

string Contact::get_fname()
{
	return (Fname);
}
string Contact::get_lname()
{
	return (lname);
}
string Contact::get_nkname()
{
	return (nkname);
}
string Contact::get_ds()
{
	return (dsecret);
}
string  Contact::get_pn()
{
	return (pnumber);
}

int	only_digit(string number)
{
	if (!isdigit(number[0]) && number[0] != '+')
		return (0);
	for (size_t i = 0; i < number.length(); i++)
	{
		if (!isdigit(number[i]))
		{
			Cout << "ERROR: Invalid input, only digits allowed" << Endl;
			return (0);
		}
	}
	return (1);
}

Contact	setup_contact()
{
	Contact a;

	string vorname;
	string famname;
	string ds;
	string nickname;
	string number;

	while (famname.length() <= 0)
	{
		Cout << "Enter Your First Name: ";
		famname.clear();
		Getline(Cin, famname);
		empty_input();
	}
	while (vorname.length() <= 0)
	{
		Cout << "Enter Your last Name: ";
		vorname.clear();
		Getline(Cin, vorname);
		empty_input();
	}
	while (nickname.length() <= 0)
	{
		Cout << "Enter Your nickname Name: ";
		nickname.clear();
		Getline(Cin, nickname);
		empty_input();
	}
	while (ds.length() <= 0)
	{
		Cout << "Enter Your dark secret: ";
		ds.clear();
		Getline(Cin, ds);
		empty_input();
	}
	while (!only_digit(number))
	{
		Cout << RED << "Enter Your Phone number: " << DEFAULT;
		number.clear();
		Getline(Cin, number);
		empty_input();
	}
	a.set(famname, vorname, nickname, ds, number);
	return (a);
}