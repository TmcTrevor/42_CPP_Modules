#include "easyfind.hpp"

int main()
{
	try {
	 std::array<int,6> ar = {1, 2, 3, 4, 5, 6};
	 int a = easyfind(ar, 2);
	 std::cout << a << std::endl;
	} catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

// int main()
// {
//     // Create a vector containing integers
//     std::vector<int> v;
// 	std::vector<int>::iterator it;
// 	int	element;
 
//     // Add two more integers to vector
	
//     v.push_back(7);
//     v.push_back(5);
//     v.push_back(0);
//     v.push_back(8);
//     v.push_back(25);
//     v.push_back(13);
 
//     // Print out the vector
//     std::cout << "v = { ";
//     for (it = v.begin(); it != v.end(); it++)
// 	{
//         std::cout << *it;
// 		if ((it + 1) != v.end())
// 		std::cout << ", ";
//     }
//     std::cout << "}" << std::endl;
// 	try
// 	{
// 		element = easyfind(v, 0);
// 		std::cout  << "Index of the first occurrence is : ";
// 		std::cout << element << std::endl;
// 		element = easyfind(v, 50);
// 		std::cout  << "Index of the first occurrence is : ";
// 		std::cout << element << std::endl;
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}
	
// }