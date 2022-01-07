
#include "AMateria.hpp"

AMateria::AMateria(string const &  type) : type(type)
{
    Cout << GREEN << "[ AMateria] Type String constructor called " << DEFAULT << Endl;
}

AMateria::AMateria()
{
    type = "random materia";
    Cout << GREEN << "[ AMateria] DEfault constructor called " << DEFAULT << Endl;
}
string const &AMateria::getType() const
{
    return (type);
}


