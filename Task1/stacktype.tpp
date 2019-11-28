#include"stacktype.h"
#include<iostream>

template <class ItemType>
StackType<ItemType>::StackType()
{
    top=-1;
}
template <class ItemType>
bool StackType<ItemType>::IsEmpty()
{
    return (top==-1);
}
template <class ItemType>
bool StackType<ItemType>::IsFull()
{
    return (top==MAX_ITEM-1);
}
template <class ItemType>
void StackType<ItemType>::Push(ItemType newItem)
{
    if(IsFull())
        throw FullStack();
    top++;
    items[top]= newItem;
}
template <class ItemType>
void StackType<ItemType>::Pop()
{
    if(IsEmpty())
        throw EmptyStack();
    top--;
}
template <class ItemType>
ItemType StackType<ItemType>::Top()
{
    if(IsEmpty())
        throw EmptyStack();
    return items[top];
}
template <class ItemType>
void StackType<ItemType>::print()
{
    for(int i=0;i<top+1;i++)
    std::cout<<items[i]<<" ";
}
