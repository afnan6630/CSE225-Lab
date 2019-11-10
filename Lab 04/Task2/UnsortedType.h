#ifndef UNSORTEDTYPE_H_INCLUDED
#define UNSORTEDTYPE_H_INCLUDED
#include"StudentInfo.h"

const int MAX_ITEMS=5;
class UnsortedType
{
    public:
        UnsortedType();
        void MakeEmpty();
        bool IsFull();
        int LengthIs();
        bool InsertItem(StudentInfo);
        bool DeleteItem(int);
        bool RetrieveItem(StudentInfo&,int);
        void ResetList();
        bool GetNextItem(StudentInfo&);

    private:
        int length;
        StudentInfo info[MAX_ITEMS];
        int currentPos;
};
#include"UnsortedType.tpp"
#endif // UNSORTEDTYPE_H


