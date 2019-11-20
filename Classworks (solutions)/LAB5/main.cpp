#include <iostream>
#include "SortedList.h"
using namespace std;

int main()
{
    SortedList<int> intL;

    cout<<"length = " << intL.LengthIs()<<endl;

    intL.InsertItem(5);
    intL.InsertItem(7);
    intL.InsertItem(4);
    intL.InsertItem(2);
    intL.InsertItem(1);

    int x;
    intL.ResetList();
    while(intL.GetNextItem(x))
        cout<<x<<" ";
    cout<<endl;

    x = 6;
    if(intL.RetrieveItem(x))
        cout<<"Item is found"<<endl;
    else
        cout<<"Item is not found"<<endl;

    x = 5;
    if(intL.RetrieveItem(x))
        cout<<"Item is found"<<endl;
    else
        cout<<"Item is not found"<<endl;

    if(intL.IsFull())
        cout<<"List is full"<<endl;
    else
        cout<<"List is not full"<<endl;

    intL.DeleteItem(1);
    intL.ResetList();
    while(intL.GetNextItem(x))
        cout<<x<<" ";
    cout<<endl;

    if(intL.IsFull())
        cout<<"List is full"<<endl;
    else
        cout<<"List is not full"<<endl;


    intL.DeleteItem(2);
    intL.DeleteItem(4);
    intL.DeleteItem(5);
    intL.DeleteItem(7);

    intL.ResetList();
    while(intL.GetNextItem(x))
        cout<<x<<" ";
    cout<<endl;

    while(intL.InsertItem(5));

    cout<<endl;
    intL.ResetList();
    while(intL.GetNextItem(x))
        cout<<x<<" ";
    cout<<endl;

    return 0;
}
