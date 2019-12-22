#include <iostream>
#include"binarysearchtree.h"
using namespace std;

int main()
{
    TreeType<int> in;
    if(in.IsEmpty())
    {
        cout<<"Tree Is Empty"<<endl;
    }
    else
    {
        cout<<"Tree Is Not Empty"<<endl;
    }
    in.InsertItem(4);
    in.InsertItem(9);
    in.InsertItem(2);
    in.InsertItem(7);
    in.InsertItem(3);
    in.InsertItem(11);
    in.InsertItem(17);
    in.InsertItem(0);
    in.InsertItem(5);
    in.InsertItem(1);

    if(in.IsEmpty())
    {
        cout<<"Tree Is Empty"<<endl;
    }
    else
    {
        cout<<"Tree Is Not Empty"<<endl;
    }
    cout<<"Length Of Tree: "<<in.LengthIs()<<endl;
    bool b;
   // in.DeleteItem(9);
    int n=9;
    in.RetrieveItem(n,b);
    if(b==1)
    {
        cout<<"Item Is Found"<<endl;
    }
    else
    {
        cout<<"Item Is not Found"<<endl;
    }
    n=13;
    in.RetrieveItem(n,b);
    if(b==1)
    {
        cout<<"Item Is Found"<<endl;
    }
    else
    {
        cout<<"Item Is not Found"<<endl;
    }
    in.ResetTree(IN_ORDER);
    bool finished=0;
    while(!finished)
    {
        int value;
        in.GetNextItem(value,IN_ORDER,finished);
        cout<<value<<" ";
    }
    cout<<endl;
    in.ResetTree(PRE_ORDER);
    finished=0;
    while(!finished)
    {
        int value;
        in.GetNextItem(value,PRE_ORDER,finished);
        cout<<value<<" ";
    }
    cout<<endl;
    finished=0;
    in.ResetTree(POST_ORDER);
    while(!finished)
    {
        int value;
        in.GetNextItem(value,POST_ORDER,finished);
        cout<<value<<" ";
    }
    cout<<endl;
    in.MakeEmpty();
    if(in.IsEmpty())
    {
        cout<<"Tree Is Empty"<<endl;
    }
    else
    {
        cout<<"Tree Is Not Empty"<<endl;
    }
    return 0;

}
