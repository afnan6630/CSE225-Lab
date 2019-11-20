#include "DA.h"
#include <iostream>

using namespace std;

template <class T>
DA<T>::DA(int size)
{
    data = new T[size];
    this->size = size;
}

template <class T>
DA<T>::~DA()
{
    delete [] data;
}

template <class T>
T DA<T>::getValue(int index)
{
    return data[index];
}

template <class T>
void DA<T>::setValue(int index, T value)
{
    data[index] = value;
}

template <class T>
int DA<T>::getSize()
{
    return this->size;
}
