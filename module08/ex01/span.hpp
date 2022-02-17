#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <exception>
#include <vector>
#include <algorithm>


class span
{
	private :
		std::vector<int> V; 
		unsigned int N;
	public :
		class spanisfull : public std::exception
		{
			public :
				const char *what() const throw();
		};
		class impossibleSpan : public std::exception
		{
			public :
				const char *what() const throw();
		};
		span(unsigned int n);
		span(const span &c);
		~span();
		span &operator=(const span &c);
		void addNumber(int c);
		void addNumber(std::vector<int>::iterator, std::vector<int>::iterator);
		int shortestSpan();
		int longestSpan();
		int get_N();
		std::vector<int>& get_v();
		void set_N(int n);
		void set_V(int index, int number);




};
#endif