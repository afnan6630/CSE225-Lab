#include <iostream>
#include"complex.h"
using namespace std;

int main()
{
    Complex c1(2,3),c2(3,4);
    Complex sum= c1+c2;
    Complex mul= c1*c2;
    bool c=(c1!=c2);
    cout<<"*** Sum ***"<<endl;
    sum.print();
    cout<<endl<<"*** Multiplication ***"<<endl;
    mul.print();
    if(c==1)
    {
        cout<<endl<<"Not Equal"<<endl<<endl;
    }
    else
    {
        cout<<"Equal";
    }
    return 0;
}
