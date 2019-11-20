#include <iostream>
#include "dynarr.h"
#include "2dDynarr.h"
using namespace std;

int main()
{
    cout<<endl<<"task 1"<<endl;
    /*task1 starts from here*/
    dynArr arr;
    dynArr arr1(5);
    //cout<<arr.getSize()<<" "<<arr1.getSize()<<endl;

    for(int i=0; i<5;i++){
        int temp;
        cin>>temp;
        arr1.setValue(i, temp);
    }
    //cout<<"bug"<<endl;
    for(int i=0; i<5;i++){
        cout<<arr1.getValue(i);
    }

    /*task1 ends here*/

    cout<<endl<<endl<<"task 2"<<endl;

    /*task 2 test starts*/

    arr.allocate(2);
    arr.setValue(0,3);
    arr.setValue(1,5);

    cout<<arr.getValue(1)<<endl;

    /*task 2 test ends*/

    cout<<endl<<"task 3"<<endl;

    /*Task 3*/

    TDDynArr tda;
    int row, col;

    cin>>row>>col;
    TDDynArr tda1(row, col);

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            int temp;
            cin>>temp;
            tda1.setValue(i, j, temp);
        }
    }


    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<tda1.getValue(i, j)<<" ";
        }
        cout<<endl;
    }

    tda.allocate(5,4);
    tda.setValue(3,4, 7);
    cout<<tda.getValue(3,4)<<endl;

    return 0;
}
