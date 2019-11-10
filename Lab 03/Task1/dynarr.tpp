#include"dynarr.h"
template<class item>
dynArr<item>::dynArr()
{
    data= NULL;
    size=0;
}
template<class item>
dynArr<item>::dynArr(int s)
{
    data= new item[s];
    size=s;
}
template<class item>
dynArr<item>::~dynArr()
{
    delete []data;
}
template<class item>
item dynArr<item>::getValue(int index)
{
    return data[index];
}
template<class item>
void dynArr<item>::setValue(int index,item value)
{
    data[index]=value;
}
