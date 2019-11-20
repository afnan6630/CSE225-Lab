#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

class Complex{
private:
    double real, imaginary;
public:
    Complex();
    Complex(double, double);
    Complex operator+(Complex);
    void Print();

    Complex operator*(Complex);
    bool operator!=(Complex);
};

#include "Complex.tpp"
#endif // COMPLEX_H_INCLUDED
