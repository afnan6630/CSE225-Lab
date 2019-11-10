#ifndef UNSORTEDTYPE_H_INCLUDED
#define UNSORTEDTYPE_H_INCLUDED
#include"UnsortedType.tpp"
const int MAX_ITEMS=5;
template<class ItemType>
class UnsortedType
{
    public:
        UnsortedType();
        void MakeEmpty();
        bool IsFull();
        int LengthIs();
        bool InsertItem(ItemType);
        bool DeleteItem(ItemType);
        bool RetrieveItem(ItemType&);
        void ResetList();
        bool GetNextItem(ItemType&);
        void print();
    private:
        int length;
        ItemType info[MAX_ITEMS];
        int currentPos;
};

#endif // UNSORTEDTYPE_H
