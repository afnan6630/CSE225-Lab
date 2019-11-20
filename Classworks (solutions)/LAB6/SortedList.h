#ifndef SORTEDLIST_H_INCLUDED
#define SORTEDLIST_H_INCLUDED
#include "StudentInfo.h"
const int MAX_ITEMS = 7;

class SortedList
{
public :
    SortedList();
    void MakeEmpty();
    bool IsFull();
    int LengthIs();
    bool InsertItem(StudentInfo);
    bool DeleteItem(int);
    bool RetrieveItem(StudentInfo&, int);
    void ResetList();
    bool GetNextItem(StudentInfo&);
private:
    int length;
    StudentInfo info[MAX_ITEMS];
    int currentPos;
};
#include "SortedList.tpp"
#endif // SORTEDLIST_H_INCLUDED
