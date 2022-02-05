#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("undefined", 72, 45, "undefined")
{
    Cout << GREEN << "[ RobotomyRequestForm ] default constructor called " << DEFAULT << Endl;
}

RobotomyRequestForm::RobotomyRequestForm(string const& target) : Form("undefined", 72, 45, target)
{
    Cout << BLUE << "[ RobotomyRequestForm ] target constructor called " << DEFAULT << Endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    Cout << RED << "[ RobotomyRequestForm ] destructor called " << DEFAULT << Endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &scf) : Form(scf.getName(), scf.getSigngrade(), scf.getExecgrade(), scf.getTarget())
{
     Cout << BLUE << "[ RobotomyRequestForm ] copy constructor called " << DEFAULT << Endl;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(RobotomyRequestForm const &scf)
{
    setName(scf.getName());
    setTarget(scf.getTarget());
    setSign(scf.getsign());
    Cout << PURPLE << "[ RobotomyRequestForm ] assignmnet operator called " << DEFAULT << Endl;
    return *this;
}


void RobotomyRequestForm::execute(Bureaucrat const & executer) const
{
    srand(time(0));
    int rands = rand();
    if (getsign() == true  && getExecgrade() >= executer.getGrade())
    {
        if (rands % 2 == 0)
            Cout << YELLOW << "< " << getTarget() << " >" << "has been robotmized successfully" <<DEFAULT << Endl;
        else
            Cout << YELLOW << "< " << getTarget() << " >" << "has failed to be robotomized" <<DEFAULT << Endl;
    }
    else
        throw Form::GradeTooLowException();
}