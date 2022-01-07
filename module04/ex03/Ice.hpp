#ifndef _ICE_HPP
#define _ICE__HPP
#include "AMateria.hpp"

class Ice : public AMateria
{
    public :
        Ice();
        ~Ice();
        Ice(string name);
        Ice(const Ice& a);
        Ice operator=(const Ice& a);
        AMateria* clone() const;
        void   Ice::use(ICharacter& target);
};
#endif