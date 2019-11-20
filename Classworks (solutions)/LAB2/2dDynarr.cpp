/*Task 3*/

#include "2dDynArr.h"
#include <iostream>
using namespace std;
TDDynArr::TDDynArr()
{
    data = NULL;
    row = 0;
    col = 0;
}
TDDynArr::TDDynArr(int r, int c)
{
    row = r;
    col = c;

    data = new int*[row];
    for(int i=0; i<row; i++){
        data[i] = new int[col];
    }

}
TDDynArr::~TDDynArr()
{
    if(data==NULL)
        delete [] data;
    else{
        for(int i=0; i<row;i++){
            delete [] data[i];
        }
        delete [] data;
    }
}
int TDDynArr::getValue(int rIndex, int cIndex)
{
    return data[rIndex][cIndex];
}
void TDDynArr::setValue(int rIndex, int cIndex, int value)
{
    data[rIndex][cIndex] = value;
}

void TDDynArr::allocate(int r, int c){
    if(data==NULL)
        delete [] data;
    else{
        for(int i=0; i<row;i++){
            delete [] data[i];
        }
        delete [] data;
    }
    row = r;
    col = col;
    data = new int*[row];

    for(int i=0; i<row; i++){
        data[i] = new int[col];
    }
}


