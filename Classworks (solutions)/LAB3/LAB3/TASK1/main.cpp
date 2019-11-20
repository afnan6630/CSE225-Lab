#include <iostream>
#include "DA.h"

using namespace std;

int main()
{
    DA<double> arr(5);

    for(int i=0; i<arr.getSize(); i++)
        arr.setValue(i, i/10.0);

    for(int i=0; i<arr.getSize(); i++)
        cout<<arr.getValue(i)<<endl;
    //cout << arr.getSize() << endl;
    return 0;
}
