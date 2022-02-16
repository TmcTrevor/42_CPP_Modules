#ifndef ARRAY_HPP_
#define ARRAY_HPP_

template<typename T>
class Array
{
    private:
        T *array;
        int n;
    public:
        Array();
        Array(unsigned int n);
        Array(Array &other);
        Array &operator=(const Array &c);
        T
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

template<typename T>
Array<T>::Array(Array &other)
{
    array = new T[other.n];
    n = other.n;
    for (size_t i = 0; i < other.n; i++)
        array[i] = other.array[i];
    return *this;
}

#endif