#include <iostream>
#include"dynarr.h"

using namespace std;

int main()
{
    int in,a;
    dynArr d1();
    dynArr d2(5);
    cout<<"Enter the New size of Array: ";
    cin>>a;

    d2.allocate(a);

    for(int i=0;i<a;i++)
    {
        cout<<"Enter Array no "<<i+1<<": ";
        cin>>in;
        d2.setValue(i,in);
    }
    cout<<endl<<"Output: "<<endl;
    for(int i=0;i<a;i++)
    {
        cout<< d2.getValue(i)<<" ";
    }
    d2.~dynArr();
    return 0;
}
