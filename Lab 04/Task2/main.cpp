#include <iostream>
#include"UnsortedType.h"
#include"StudentInfo.h"
using namespace std;

int main()
{
    UnsortedType in;

    StudentInfo s1(15234, "Abdullah", 2.6);
    StudentInfo s2(13732, "Muhammad", 3.9);
    StudentInfo s3(13569, "Ali", 1.2);
    StudentInfo s4(15467, "Saad", 3.1);
    StudentInfo s5(16285, "Mahdi", 3.1);
    StudentInfo print;

    in.InsertItem(s1);
    in.InsertItem(s2);
    in.InsertItem(s3);
    in.InsertItem(s4);
    in.InsertItem(s5);

    while(in.GetNextItem(print))
    {
        print.printStudent();
    }
    in.ResetList();
    in.DeleteItem(15234);

    cout<<endl<<"***After Delete***"<<endl<<endl;
    while(in.GetNextItem(print))
    {
        print.printStudent();
    }
    cout<<endl<<"***After RetrieveItem***"<<endl<<endl;
    in.ResetList();
    in.RetrieveItem(print,13732);
    print.printStudent();



}
