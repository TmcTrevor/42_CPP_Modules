#ifndef _CURE_HPP
#define _CURE__HPP
#include "AMateria.hpp"

class Cure : public AMateria
{
    public :
        Cure();
        ~Cure();
        Cure(string name);
        Cure(const Cure& a);
        Cure operator=(const Cure& a);
        AMateria* clone() const;
        void   use(ICharacter& target);
};
#endif