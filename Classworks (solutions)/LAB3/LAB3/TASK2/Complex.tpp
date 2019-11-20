#include "Complex.h"
#include <iostream>
#include <string>
using namespace std;

Complex::Complex(){
    real = 0;
    imaginary = 0;
}

Complex::Complex(double r, double i){
    real = r;
    imaginary = i;
}

Complex Complex::operator+(Complex a){
    Complex t;
    t.real = real + a.real;
    t.imaginary = imaginary + a.imaginary;
    return t;
}

void Complex::Print(){
    if(imaginary!=1 && imaginary !=-1)
        cout<<real<<(imaginary<0?"":"+")<<imaginary<<"i"<<endl;
    else
        cout<<real<<(imaginary<0?"-":"+")<<"i"<<endl;
}



Complex Complex::operator*(Complex a){
    Complex t;
    t.real = (real*a.real) - (imaginary*a.imaginary);
    t.imaginary = (imaginary * a.real) + (real * a.imaginary);
    return t;
}

bool Complex::operator!=(Complex a){
    if(a.real!=real)
        return true;
    else
        return a.imaginary!=imaginary;

}
