#include "iter.hpp"

template <typename T>
void increment(T  &value)
{
    value+=10;
}

int main()
{
    int tab[] = {0,1,2,3,4,5,6};
    char value[] = "hello world";
    iter(tab,7, increment);
    iter(value, 11, increment);
    for(int i = 0; i < 11;i++)
        std::cout << value[i] << " ";
   std::cout << std::endl;
}