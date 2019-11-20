#include "SortedList.h"
#include <iostream>
using namespace std;

SortedList::SortedList()
{
    length = 0;
    currentPos = - 1;
}
 void SortedList::MakeEmpty()
{
    length = 0;
}

bool SortedList::IsFull()
{
    return (length == MAX_ITEMS);
}
 int SortedList::LengthIs()
{
    return length;
}
 void SortedList::ResetList()
{
    currentPos = - 1;
}

bool SortedList::GetNextItem(StudentInfo& student)
{
    if(currentPos<length-1)
    {
        currentPos++;
        student = info [currentPos];
        return true;
    }
    return false;
}

bool SortedList::InsertItem(StudentInfo student)
{
    if(IsFull())
        return false;
    int location = 0;
    while (location < length)
    {
        if(student.getID() >= info[location].getID())
        {
            location++;
        }
        else if(student.getID() < info[location].getID())
            break;
    }
    for (int index = length; index > location; index--)
        info[index] = info[index - 1];
    info[location] = student;
    length++;
    return true;
}

bool SortedList::DeleteItem(int id)
{
    int location = 0;
    bool deleted = false;
    while (location < length)
    {
        if(id == info[location].getID())
        {
            deleted = true;
            break;
        }
        location++;
    }
    if(!deleted)
        return deleted;
    for (int index = location + 1; index < length; index++)
        info[index - 1] = info[index];
    length--;
    return deleted;
}

bool SortedList::RetrieveItem(StudentInfo& student, int id)
{
    int midPoint, first = 0, last = length - 1;
    bool found = false;
    while ((first <= last) && !found)
    {
        midPoint = (first + last) / 2;
        if(id < info[midPoint].getID())
        {
            last = midPoint - 1;
        }
        else if(id > info[midPoint].getID())
        {
            first = midPoint + 1;
        }
        else
        {
            found = true;
            student = info[midPoint];
        }
    }
    return found;
}
