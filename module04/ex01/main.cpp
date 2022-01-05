#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

// int main()
// {
//     const Animal* meta = new Animal();
//     const Animal* j = new Dog();
//     const Animal* i = new Cat();
//     std::cout << j->getType() << " " << std::endl;
//     std::cout << i->getType() << " " << std::endl;
//     i->makeSound(); //will output the cat sound!
//     j->makeSound();
//     meta->makeSound();
//     delete j;
//     delete meta;
//     delete i;
// }


// int main()
// {
// const Animal* j = new Dog();
// const Animal* i = new Cat();
// delete j;//should not create a leak
// delete i;
// }

int main()
{
    Animal *animal[6];

    for (int i = 0; i < 6; i++)
    {
        if (i % 2 == 0)
            animal[i] = new Dog();
        else
            animal[i] = new Cat();
    }
    for (int i = 0; i < 6; i++)
    {
        Cout << "Animal " << i << " : ";
        animal[i]->makeSound();
    }
    for (int i = 0; i < 6; i++)
        delete animal[i];
}