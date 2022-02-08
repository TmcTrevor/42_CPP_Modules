#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("undefined", 25, 5, "undefined")
{
    Cout << GREEN << "[ PresidentialPardonForm ] default constructor called " << DEFAULT << Endl;
}

PresidentialPardonForm::PresidentialPardonForm(string const& target) : Form("undefined", 25, 5, target)
{
    Cout << BLUE << "[ PresidentialPardonForm ] target constructor called " << DEFAULT << Endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    Cout << RED << "[ PresidentialPardonForm ] destructor called " << DEFAULT << Endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &scf) : Form(scf.getName(), scf.getSigngrade(), scf.getExecgrade(), scf.getTarget())
{
     Cout << BLUE << "[ PresidentialPardonForm ] copy constructor called " << DEFAULT << Endl;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(PresidentialPardonForm const &scf)
{
    setName(scf.getName());
    setTarget(scf.getTarget());
    setSign(scf.getsign());
    Cout << PURPLE << "[ PresidentialPardonForm ] assignmnet operator called " << DEFAULT << Endl;
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executer) const
{
    if (getsign() == true  && getExecgrade() >= executer.getGrade())
        Cout << YELLOW << "< " << getTarget() << " >" << "has been pardoned by y Zaphod Beeblebrox" <<DEFAULT << Endl;
    else
        throw Form::GradeTooLowException();
}