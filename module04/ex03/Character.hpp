#ifndef __Character_HPP
#define __Charactet_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character 
{
    private:
        string Name;
        AMateria* inventory[4];
    public :
        Character();
        Character(const string& s);
        Character(const Character& c);
        Character& operator=(const Character& c);
        ~Character();
        string const& getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);        
};

#endif