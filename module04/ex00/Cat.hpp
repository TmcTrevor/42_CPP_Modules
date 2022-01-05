#ifndef _CAT_HPP
#define _CAT_HPP
#include "Animal.hpp"

class Cat : public Animal
{
    private:

    public:
        Cat();
        ~Cat();
        Cat(string type);
        Cat(const Cat& a);
        Cat& operator=(const Cat& a);
        void makeSound() const;
};

#endif