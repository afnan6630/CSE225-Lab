#include <iostream>
#include"dynarr.h"
using namespace std;

int main()
{
    int row,col,input;
    dynArr d1();
    dynArr d2(5, 5);

    cout<<"Enter the size of Row: ";
    cin >> row;
    cout<<"Enter the size of col: ";
    cin>>col;

    d2.allocate(row, col);

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<"Enter Index no ["<<i+1<<"] ["<<j+1<<"] : ";
            cin >> input;
            d2.setValue(i,j,input);
        }
    }
    cout<<endl<<"Output: "<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << d2.getValue(i,j) << " ";
        }
        cout << endl;
    }
    d2.~dynArr();
    return 0;
}
