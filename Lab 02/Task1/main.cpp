#include <iostream>
#include"dynarr.h"

using namespace std;

int main()
{
    int in;
    dynArr d1();
    dynArr d2(5);

    for(int i=0;i<5;i++)
    {
        cout<<"Enter Array no "<<i+1<<": ";
        cin>>in;
        d2.setValue(i,in);
    }
    cout<<endl<<"Output: "<<endl;
    for(int i=0;i<5;i++)
    {
        cout<< d2.getValue(i)<<" ";
    }
    return 0;
}
