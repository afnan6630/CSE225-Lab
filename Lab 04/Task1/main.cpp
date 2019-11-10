#include <iostream>
#include"UnsortedType.h"
using namespace std;
void checkItem(bool b);
void checkFull(bool b);

int main()
{
    UnsortedType <int> in;

    in.InsertItem(5);
    in.InsertItem(7);
    in.InsertItem(6);
    in.InsertItem(9);
    in.print();
    in.ResetList();
    int a= in.LengthIs();
    cout<<endl<<a<<endl;

    in.InsertItem(1);
    in.print();
    in.ResetList();
    int b=4;

    cout<<endl;

    checkItem(in.RetrieveItem(b));
    b=5;

    checkItem(in.RetrieveItem(b));
    b=9;

    checkItem(in.RetrieveItem(b));
    b=10;

    checkItem(in.RetrieveItem(b));

    checkFull(in.IsFull());

    in.DeleteItem(5);

    checkFull(in.IsFull());
    in.DeleteItem(1);

    in.print();
    in.ResetList();
    in.DeleteItem(6);

    cout<<endl;
    in.print();
    in.ResetList();
}
void checkItem(bool b){
    if(b==1)
        cout << "Item is found" << endl;
    else
        cout << "Item is not found" << endl;
}
void checkFull(bool b){
    if(b==1)
        cout << "List is full" << endl;
    else
        cout << "List is not full" << endl;
}
