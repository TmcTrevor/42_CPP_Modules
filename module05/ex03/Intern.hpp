#ifndef INTERN_HPP_
#define INTERN_HPP_
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
		Intern(void);
		Intern(Intern const &src);
		Intern &operator=(Intern const &rhs);
		Form	*clone_PPF(const string &target);
		Form	*clone_RRF(const string &target);
		Form	*clone_SCF(const string &target);
		Form	*makeForm(const string &name, const string &target);
		~Intern(void);
};

#endif