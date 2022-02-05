#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("undefined", 145, 137, "undefined")
{
    Cout << GREEN << "[ ShrubberyCreationForm ] default constructor called " << DEFAULT << Endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(string const& target) : Form("undefined", 145, 137, target)
{
    Cout << BLUE << "[ ShrubberyCreationForm ] target constructor called " << DEFAULT << Endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    Cout << RED << "[ ShrubberyCreationForm ] destructor called " << DEFAULT << Endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &scf) : Form(scf.getName(), scf.getSigngrade(), scf.getExecgrade(), scf.getTarget())
{
     Cout << BLUE << "[ ShrubberyCreationForm ] copy constructor called " << DEFAULT << Endl;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(ShrubberyCreationForm const &scf)
{
    setName(scf.getName());
    setTarget(scf.getTarget());
    setSign(scf.getsign());
    Cout << PURPLE << "[ ShrubberyCreationForm ] assignmnet operator called " << DEFAULT << Endl;
    return *this;
}

void draw_tress(std::ofstream &file)
{
    file << "               ,@@@@@@@," << std::endl;
    file << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
    file << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
    file << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
    file << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
    file << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
    file << "   `&%'\' ` /%&'    |.|        '\' '|8'" << std::endl;
    file << "        |o|        | |          | |" << std::endl;
    file << "        |.|        | |          | |" << std::endl;
    file << "   \\/ ._\\//_/__/  \\_//__\\/.  \\_//__/_" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executer) const
{
   // Cout << "[ ----------- execute grade form " << getExecgrade() << " and execute grade is : " << executer.getGrade() << Endl;
    if (getsign() == true  && getExecgrade() >= executer.getGrade())
    {
        string s = getTarget() + "_shrubbery";
        std::ofstream file(s);

       // Cout << "[ ShrubberyCreationForm ]" << Endl;
        draw_tress(file);

    }
    else
        throw Form::GradeTooLowException();
}