#include <iostream>
#include "UnsortedType.h"
using namespace std;

int main()
{
    UnsortedType<int> intList;

    intList.InsertItem(5);
    intList.InsertItem(7);
    intList.InsertItem(6);
    intList.InsertItem(9);

    int x;
    intList.ResetList();
    while(intList.GetNextItem(x)){
        cout<<x<<" ";
    }
    cout<<endl;

    cout<<"Length : "<<intList.LengthIs()<<endl;

    intList.InsertItem(1);

    intList.ResetList();
    while(intList.GetNextItem(x)){
        cout<<x<<" ";
    }
    cout<<endl;

    x=4;
    if(intList.RetrieveItem(x)){
        cout<<"Item is found"<<endl;
    }
    else{
        cout<<"Item is not found"<<endl;
    }
    x=5;
    if(intList.RetrieveItem(x)){
        cout<<"Item is found"<<endl;
    }
    else{
        cout<<"Item is not found"<<endl;
    }
    x=9;
    if(intList.RetrieveItem(x)){
        cout<<"Item is found"<<endl;
    }
    else{
        cout<<"Item is not found"<<endl;
    }
    x=10;
    if(intList.RetrieveItem(x)){
        cout<<"Item is found"<<endl;
    }
    else{
        cout<<"Item is not found"<<endl;
    }

    if(intList.IsFull())
        cout<<"List is full"<<endl;
    else
        cout<<"List is not full"<<endl;

    intList.DeleteItem(5);

    if(intList.IsFull())
        cout<<"List is full"<<endl;
    else
        cout<<"List is not full"<<endl;

    intList.DeleteItem(1);

    intList.ResetList();
    while(intList.GetNextItem(x)){
        cout<<x<<" ";
    }
    cout<<endl;

    intList.DeleteItem(6);

    intList.ResetList();
    while(intList.GetNextItem(x)){
        cout<<x<<" ";
    }
    cout<<endl;

    return 0;
}
