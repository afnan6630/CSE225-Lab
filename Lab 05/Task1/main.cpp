#include <iostream>
#include"SortedList.h"
void checkItem(bool b);
void checkFull(bool b);
using namespace std;

int main()
{
    SortedList<int> in;
    cout<<"Printing the length of list: ";
    cout<<in.LengthIs();
    in.InsertItem(5);
       in.InsertItem(7);
          in.InsertItem(4);
             in.InsertItem(2);
                in.InsertItem(1);
    cout<<endl<<"Printing the list: ";
    in.Print();
    in.ResetList();
    int n=6;
    cout<<endl;
    checkItem(in.RetrieveItem(n));
    n=5;
    checkItem(in.RetrieveItem(n));
    checkFull(in.IsFull());
    in.DeleteItem(1);
    in.Print();
    in.ResetList();
    cout<<endl;
    checkFull(in.IsFull());
      in.DeleteItem(2);
        in.DeleteItem(4);
          in.DeleteItem(5);
            in.DeleteItem(7);
    in.Print();
    in.ResetList();
        in.InsertItem(6);
            in.InsertItem(6);
                in.InsertItem(6);
                    in.InsertItem(6);
                        in.InsertItem(6);
                           in.InsertItem(6);
    in.Print();



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
