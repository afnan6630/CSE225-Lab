#ifndef DA_H_INCLUDED
#define DA_H_INCLUDED

template <class T>
class DA
{
private:
    T *data;
    int size;

public:
    DA(int size);
    ~DA();
    void setValue(int index, T value);
    T getValue(int index);
    int getSize();
};

#include "DA.tpp"

#endif // DA_H_INCLUDED
