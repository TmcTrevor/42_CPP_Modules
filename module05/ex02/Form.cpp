#include "Form.hpp"

Form::Form() : signgrade(150), execgrade(150)
{
    Name = "randm form";
    signd = false;
    Cout << GREEN << "[ FORM] Default constructor called" << DEFAULT << Endl;
}

Form::~Form()
{
    Cout << RED << "[ FORM] destructor called" << DEFAULT << Endl;
}


Form::Form(string name, int signgrade, int execgrade, string target) : signgrade(signgrade), execgrade(execgrade)
{
    Name = name;
    Target = target;
    if (signgrade < 1 || execgrade < 1)
        throw GradeTooHighException();
    if (signgrade > 150 || execgrade > 150)
        throw GradeTooLowException();
    Cout << GREEN << "[ FORM ] name and grades contructor called " << DEFAULT << Endl;
}

Form::Form(const Form& other) : signgrade(other.signgrade), execgrade(other.execgrade)
{
    Name = other.Name;
    Cout << GREEN << "[ FORM ] copy constructor called" << DEFAULT << Endl;
}

Form& Form::operator=(const Form &c) 
{
    Name = c.Name;
    signd = c.signd;
    Cout << PURPLE << "[ FORM ] assignment operator called" << DEFAULT << Endl;
    return (*this);
}
/*********************** Getters ***************************/
string Form::getName() const
{
    return (Name);
}

int Form::getSigngrade() const
{
    return (signgrade);
}

int Form::getExecgrade() const
{
    return (execgrade);
}

bool Form::BeSigned(Bureaucrat const &c)
{
    if (c.getGrade() > signgrade)
        throw GradeTooLowException();
    signd = true;
    return (true);
}

bool Form::getsign() const
{
    return signd;
}

string Form::getTarget() const
{
    return Target;
}
/**************************************************/
/************** Setters ****************/
void Form::setName(string name) 
{
    Name = name;
}
void Form::setSign(bool sign)
{
    signd = sign;
}

void Form::setTarget(string target)
{
    Target = target;
}
/************************************************/
const char* Form::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
}

const char* Form::GradeTooLowException::what() const throw()
{
    return "Grade is too LOW";
}
std::ostream& operator<<(std::ostream& os, const Form& a)
{
    string e = "";
    if (a.getsign() == false)
        e = "not";
    os << BLUE << a.getName() << " is " << e << " signed -- signed grade is : " << a.getSigngrade() << " and its execgrade is : " << a.getExecgrade() << DEFAULT << Endl;
    return os;
}