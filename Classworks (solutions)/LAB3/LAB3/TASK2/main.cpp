#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
    Complex A(2,-2);
    Complex B(2,-2);
    Complex C(3,4);
    Complex D = A+B;
    D.Print();
//    Complex result = A
    cout << "A!=B : "<<(A!=B) << endl;
    return 0;
}
