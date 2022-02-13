#ifndef ITER_HPP_
#define ITER_HPP_
#include <iostream>
#include <string>

template <typename T>
void    iter(T a[], int N, void (*f)(T &))
{
    for(int i = 0; i < N;i++)
        f(a[i]);
}

#endif

