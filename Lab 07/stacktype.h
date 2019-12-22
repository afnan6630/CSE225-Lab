#ifndef STACKTYPE_H_INCLUDED
#define STACKTYPE_H_INCLUDED
using namespace std;
const int MAX_ITEMS = 100;
class FullStack
// Exception class thrown
// by Push when stack is full.
{


};
class EmptyStack{
};
template <class ItemType> class StackType
{
public:
    StackType();
    bool IsFull();
    bool IsEmpty();
    void Push(ItemType);
    void Pop();
    ItemType Top();
private:
    int top;
    ItemType items[MAX_ITEMS];
};
#include "stacktype.tpp"
#endif // STACKTYPE_H_INCLUDED
