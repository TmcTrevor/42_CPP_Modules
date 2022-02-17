#include "span.hpp"

span::span(unsigned int n)
{
	N = n;
	std::cout << "unsigned int contructor called " << std::endl;
}

span::span(const span &c)
{
	N = c.N;
	V = c.V;
}

span::~span()
{
	std::cout << "Destructor called " << std::endl;
}

span &span::operator=(const span &c)
{
	N = c.N;
	V = c.V;
	return (*this);	
}

void span::addNumber(int c)
{
	if (V.size() >= N)
		throw spanisfull();
	V.push_back(c);
}

void span::addNumber(std::vector<int>::iterator a, std::vector<int>::iterator b)
{
	unsigned int dst = std::distance(a, b);
	if (V.size() + dst >= N)
		throw spanisfull();
	V.insert(V.end(), a, b);
}

int span::shortestSpan()
{
	
	if (V.size() <= 1)
		throw impossibleSpan();
	std::vector<int>::iterator a;
	int short1;
	std::sort(V.begin(), V.end());
	short1 = V[0];
	
	for (a = V.begin() + 1; a != V.end();a++ )
	{
		if (short1 > *a - *(a - 1))
			short1 = *a - *(a - 1);
	}
	return (short1);
}

int span::longestSpan()
{
	int long1;
	if (V.size() <= 1)
		throw impossibleSpan();
	sort(V.begin(), V.end());
	
	long1 = V[V.size() - 1] -  V[0];
	return (long1);
}

const char *span::spanisfull::what() const throw()
{
	return ("the span is full cannot add numbers !");
}

const char *span::impossibleSpan::what() const throw()
{
	return ("the span has 1 number or empty");
}
int span::get_N()
{
    return N;
}

std::vector<int>& span::get_v()
{
    return (V);
}

void span::set_N(int n)
{
    N = n;
}

void span::set_V(int index, int number)
{
    V[index] = number;
}