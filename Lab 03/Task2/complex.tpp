#include"complex.h"
#include<iostream>

Complex::Complex()
{
   Real=0;
   Imaginary=0;
}
Complex::Complex(double r, double i)
{
    Real=r;
    Imaginary=i;
}
Complex Complex::operator+(Complex a)
{
    Complex t;
    t.Real= Real+a.Real;
    t.Imaginary= Imaginary+a.Imaginary;
    return t;
}
Complex Complex::operator*(Complex a)
{
    Complex t;
    t.Real= (Real*a.Real)-(Imaginary*a.Imaginary);
    t.Imaginary= (Real*a.Imaginary)+(Imaginary*a.Real);
    return t;
}
bool Complex::operator!=(Complex a)
{
    bool t;
    if(Real!=a.Real && Imaginary!=a.Imaginary){
       t = true;
    }
    else
    {
        t= false;
    }
    return t;
}
void Complex::print()
{
    std::cout<<"Real: "<<Real<<std::endl;
    std::cout<<"Imaginary: "<<Imaginary<<std::endl;
}
