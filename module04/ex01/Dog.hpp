#ifndef _DOG_HPP
#define _DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *dogBrain;
    public:
        Dog();
        ~Dog();
        Dog(string type);
        Dog(const Dog& a);
        Dog& operator=(const Dog& a);
        void makeSound() const;
};

#endif