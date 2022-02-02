#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    Name = "Anonyme";
    Grade = 150;
}

Bureaucrat::Bureaucrat(string &name, int grade)
{
    Name = name;
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
    Grade = grade;
    Cout << GREEN << "name anad grade constructor called" << DEFAULT << Endl;
}

Bureaucrat::~Bureaucrat()
{
        Cout << RED << "Destructor called" << DEFAULT << Endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &c)
{
    this->Name = c.Name;
    this->Grade = c.Grade;
    Cout << PURPLE << "copy constructor called" << DEFAULT << Endl;
}

Bureaucrat Bureaucrat::operator=(const Bureaucrat &c)
{
    this->Name = c.Name;
    this->Grade = c.Grade;
    Cout << PURPLE << "assignment operator called " << DEFAULT << Endl;
    return (*this);
}
string Bureaucrat::getName() const
{
    return (this->Name);
}

int Bureaucrat::getGrade() const
{
    return (this->Grade);
}

void Bureaucrat::IncrementGrade()
{
    this->Grade++;
}

void Bureaucrat::DecrementGrade()
{
    this->Grade--;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade is too hight";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade is too LOW";
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &c)
{
    os << BLUE << c.getName() << " Bureaucrat Grade : " << c.getGrade() << DEFAULT << Endl;
    return os;
}