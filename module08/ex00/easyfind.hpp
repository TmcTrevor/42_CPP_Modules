#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <array>
#include <exception>
#include <map>
#include <string>
#include <iterator>
#include <vector>
#include <list>

class elementnotfound : public std::exception
{
	public :
		const char *what() const throw();
};

const char *elementnotfound::what() const throw()
{
	return ("element not found");
}

template <typename T>
int easyfind(T a, int b)
{
	typename T::iterator it;

	it = std::find(a.begin(), a.end(), b);
	unsigned int dst = std::distance(a.begin(), it);
	if (it != a.end())
		return (dst);
	throw elementnotfound();
}

#endif