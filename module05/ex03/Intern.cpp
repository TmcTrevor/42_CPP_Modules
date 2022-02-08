#include "Intern.hpp"

Intern::Intern(void)
{
	Cout << "Intern::Default constructor called." << Endl;
}

Intern::Intern(Intern const &src)
{
	Cout << "Intern::Copy constructor called." << Endl;
	(void)src;
}

Intern &Intern::operator=(Intern const &rhs)
{
	Cout << "Intern::Assignement operator called." << Endl;
	(void) rhs;
	return (*this);
}


Form	*Intern::clone_PPF(const string &target)
{
	return (new PresidentialPardonForm(target));
}

Form	*Intern::clone_RRF(const string &target)
{
	return (new RobotomyRequestForm(target));
}

Form	*Intern::clone_SCF(const string &target)
{
	return (new ShrubberyCreationForm(target));
}

Form* Intern::makeForm(const string &name, const string &target)
{
    string forms[3] = {
		"PresidentialPardonForm",
		"RobotomyRequestForm",
		"ShrubberyCreationForm"
	};

    Form* (Intern::*X[3])(const string &) = {
        &Intern::clone_SCF,
        &Intern::clone_RRF,
        &Intern::clone_PPF
        
    };
    for (int i = 0; i < 3; i++)
	{
		if (forms[i] == name)
			return((this->*X[i])(target));
	}
	std::cerr << RED << "[ The requested form is invalid ]" << DEFAULT << Endl;
	return (nullptr);
}

Intern::~Intern(void)
{
	Cout << "Intern::Destructor called." << Endl;
}