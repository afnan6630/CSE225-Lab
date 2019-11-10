#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED
class Complex
{
    public:
        Complex();
        Complex(double i, double j);
        Complex operator+(Complex);
        Complex operator*(Complex);
        bool operator!=(Complex);
        void print();
    private:
        double Real;
        double Imaginary;
} ;
#include"complex.tpp"
#endif // COMPLEX_H_INCLUDED
