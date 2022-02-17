#ifndef ARRAY_HPP_
#define ARRAY_HPP_
#include <iostream>
#include <exception>
#include <string>

template<typename T>
class Array
{
    private:
        T *array;
        unsigned int n;
    public:
    class Outofrange : public std::exception
		{
			public:
				const char *what() const throw();
		};
        Array();
        ~Array();
        Array(unsigned int n);
        Array(Array &other);
        Array &operator=(const Array &c);
        T &operator[](unsigned int a);
        unsigned int size() const;
        
};

template<typename T>
Array<T>::Array()
{
    *array = NULL;
    std::cout << "Empty Array created" << std::endl;
}

template<typename T>
Array<T>::Array(unsigned int n)
{
    this->n = n;
    array = new T[n];
     std::cout << "Array of size " << n <<" created" << std::endl;
}
template<typename T>
Array<T>::Array(Array &other)
{
    array = new T[other.n];
    n = other.n;
    for (size_t i = 0; i < other.n; i++)
        array[i] = other.array[i];
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &c)
{
    if(array)
        delete[] array;
     array = new T[c.n];
    n = c.n;
   for (unsigned int i = 0; i < c.n; i++)
        array[i] = c.array[i];
    return (*this);
}

template <typename T>
T &Array<T>::operator[](unsigned int a)
{
    if (a > n)
        throw Outofrange();
    return (array[a]);
}

template <typename T>
unsigned int Array<T>::size() const
{
    return (n);
}
template <typename T>
const char * Array<T>::Outofrange::what() const throw()
{
    return "out of range <abort>";
}
template <typename T>
Array<T>::~Array()
{
    delete [] array;
}
#endif