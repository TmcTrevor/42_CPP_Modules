#ifndef _BRAIN_HPP
#define _BRAIN_HPP
#include "Animal.hpp"
#include <string>

class Brain
{
    private:
        string ideas[100];
    public :
            Brain();
            Brain(const Brain& a);
            Brain& operator=(const Brain& a);
            ~Brain();
};

#endif