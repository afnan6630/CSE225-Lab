#ifndef STACKTYPE_H_INCLUDED
#define STACKTYPE_H_INCLUDED

const int MAX_ITEM=5;

class FullStack
{

};
class EmptyStack
{

};
template <class ItemType>
class StackType
{
    public:
        StackType();
        bool IsFull();
        bool IsEmpty();
        void Push(ItemType);
        void Pop();
        ItemType Top();
        void print();
    private:
        int top;
        ItemType items[MAX_ITEM];
};
#include"stacktype.tpp"
#endif // STACKTYPE_H_INCLUDED
