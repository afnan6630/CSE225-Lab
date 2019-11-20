#include <iostream>
#include "SortedList.h"
#include "StudentInfo.h"
using namespace std;

int main()
{
    SortedList l;
    StudentInfo st0(15234, "Abdullah", 2.6);
    StudentInfo st1(15732, "Muhammad", 3.9);
    StudentInfo st2(13569, "Ali", 3.3);
    StudentInfo st3(15467, "Saad", 3.1);
    StudentInfo st4(16285, "Mahdi", 3.1);

    l.InsertItem(st1);
    l.InsertItem(st0);
    l.InsertItem(st2);
    l.InsertItem(st3);
    l.InsertItem(st4);

    l.DeleteItem(15467);

    StudentInfo demo;
    if(l.RetrieveItem(demo,13569)){
        cout<<"Item found"<<endl;
        demo.printStudent();
    }
    else{
        cout<<"Item not found"<<endl;
    }

    cout<<endl;

    l.ResetList();
    while(l.GetNextItem(demo)){
        demo.printStudent();
    }

    return 0;
}
