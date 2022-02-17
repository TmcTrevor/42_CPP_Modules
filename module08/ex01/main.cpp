#include "span.hpp"

// int main()
// {
//     try
//     {
// 		span sp = span(5);
// 		sp.addNumber(6);
// 		sp.addNumber(3);
// 		sp.addNumber(17);
// 		sp.addNumber(9);
// 		sp.addNumber(11);
// 		std::cout << sp.shortestSpan() << std::endl;
// 		std::cout << sp.longestSpan() << std::endl;
//     }
//     catch(const std::exception& e)
//     {
//         std::cout << e.what() << '\n';
//     }
// }

int main()
{ 
	std::vector<int> test(1000, 8);
	// std::vector<int>::iterator it_test;
	// for(it_test = test.begin(); it_test !=  test.end(); it_test++)
	// 	std::cout << *it_test << " ";
	// std::cout << std::endl;
	// std::cout << test.size() << std::endl;
		try
		{
				span V(2000);
				V.addNumber(100);
				V.addNumber(205);
				V.addNumber(test.begin(), test.end());
				V.addNumber(500);
			 std::vector<int>::iterator  it;
				for(it=V.get_v().begin(); it != V.get_v().end(); it++)
						std::cout << *it << " ";
				std::cout << std::endl;
				std::cout << "size = " << V.get_v().size() << std::endl;
				std::cout << V.shortestSpan() << std::endl;
		 		std::cout << V.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
				std::cout << e.what() << '\n';
		}
		
}