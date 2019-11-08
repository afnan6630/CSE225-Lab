#include"dynarr.h"

dynArr::dynArr()
{
    data= NULL;
    col=0;
    row=0;
}
dynArr::dynArr(int c,int r)
{
    data= new int*[r];
    for(int i=0;i<r;i++)
    {
        data[i]= new int[c];
    }
}
dynArr::~dynArr()
{
    delete []data;
}
int dynArr::getValue(int r,int c)
{
    return data[r][c];
}
void dynArr::setValue(int r,int c, int v)
{
    data[c][r]= v;
}
void dynArr::allocate(int r,int c)
{
    data= new int*[r];
    for(int i=0;i<r;i++)
    {
        data[i]=new int[c];
    }
}
