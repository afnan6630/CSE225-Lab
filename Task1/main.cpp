#include <iostream>
#include"stacktype.h"
void checkEmpty(bool b);
void checkFull(bool b);

using namespace std;

int main()
{
    StackType<int> in,temp;
    checkEmpty(in.IsEmpty());
    in.Push(5);
    in.Push(7);
    in.Push(4);
    in.Push(2);
    checkEmpty(in.IsEmpty());
    checkFull(in.IsFull());
    in.print();
    cout<<endl;
    in.Push(3);
    in.print();
    cout<<endl;
    checkFull(in.IsFull());
    cout<<in.Top();

}
void checkEmpty(bool b)
{
    if(b==1)
        cout << "Stack is Empty" <<endl;
    else
        cout << "Stack is not Empty" <<endl;
}
void checkFull(bool b)
{
    if(b==1)
        cout << "Stack is Full" <<endl;
    else
        cout << "Stack is not Full" <<endl;
}
