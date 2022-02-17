#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <iostream>
#include <algorithm>
#include <string>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	private:
		unsigned int N;
	public:
		MutantStack(){};
		MutantStack(const MutantStack &c);
		~MutantStack(){};
		MutantStack &operator=(const MutantStack &c);
		typedef typename std::stack<T>::container_type::iterator    iterator;
		iterator    begin(){return this->c.begin();};
		iterator    end(){return this->c.end();};

};

#endif