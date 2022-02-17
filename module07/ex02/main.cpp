#include "Array.hpp"


// z

// #include <Array.hpp>

// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

// //     for (int i = 0; i < MAX_VAL; i++)
// //     {
// //         if (mirror[i] != numbers[i])
// //         {
// //             std::cerr << "didn't save the same value!!" << std::endl;
// //             return 1;
// //         }
// //     }
// //     try
// //     {
// //         numbers[-2] = 0;
// //     }
// //     catch(const std::exception& e)
// //     {
// //         std::cerr << e.what() << '\n';
// //     }
// //     try
// //     {
// //         numbers[MAX_VAL] = 0;
// //     }
// //     catch(const std::exception& e)
// //     {
// //         std::cerr << e.what() << '\n';
// //     }

// //     for (int i = 0; i < MAX_VAL; i++)
// //     {
// //         numbers[i] = rand();
// //     }
// //     delete [] mirror;//
// //     return 0;
// }
#include <iostream>
#include "Array.hpp"

int main()
{
    try
    {
        Array<int> tap(5);
        Array<float> tap2(10);

        std::cout << "*******------------test size--------------------***" << std::endl;
        std::cout << "size tap 1 === " << tap.size() << std::endl;
        std::cout << "*******---------------test size -------------***" << std::endl;
        std::cout << "size tap 2 === " << tap2.size() << std::endl;
        std::cout << "*******-----------test value ------------***" << std::endl;
        tap[0] = 33;
        tap2[0] = 30000;
        std::cout << "value tap1 === " << tap[0] << std::endl;
        std::cout << "value tap1 === " << tap2[0] << std::endl;
        std::cout << "*******--------------test out of range-------------***" << std::endl;
       // std::cout << tap[-1] << std::endl;
       // std::cout << "sucss" << std::endl;
        std::cout << "*******--------------test copy value-------------***" << std::endl;
        Array<int> cp(tap);
        std::cout << "copy value== " << cp[0] << std::endl; 
    }
    catch (std::exception &e)
    {
        std::cout << "Error catch " << e.what() << std::endl;
    }
}