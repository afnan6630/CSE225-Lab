#include <iostream>
#include "UnsortedType.h"
#include "StudentInfo.h"

using namespace std;

int main()
{
    UnsortedType li;

    StudentInfo abdullah(15234, "Abdullah", 2.6);
    StudentInfo muhammad(13732, "Muhammad", 3.9);
    StudentInfo ali(13569, "Ali", 1.2);
    StudentInfo saad(15467, "Saad", 3.1);
    StudentInfo mahdi(16285, "Mahdi", 3.1);

    li.InsertItem(abdullah);
    li.InsertItem(muhammad);
    li.InsertItem(ali);
    li.InsertItem(saad);
    li.InsertItem(mahdi);

    StudentInfo demo;

    while(li.GetNextItem(demo)){
        demo.printStudent();
    }

    li.DeleteItem(15467);

    li.ResetList();
    cout<<endl;
    while(li.GetNextItem(demo)){
        demo.printStudent();
    }

    li.RetrieveItem(demo, 13732);
    cout<<endl;
    demo.printStudent();


//    for(int i=0; i<li.LengthIs();i++)
//        li.printStudent();

    //UnsortedType <int> l1;
    //cout << "Hello world!" << endl;
    return 0;
}
