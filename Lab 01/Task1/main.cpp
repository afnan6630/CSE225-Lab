#include <iostream>

using namespace std;

int main()
{
   int num, *ptr;
   cout<<"Enter the size of Array: ";
   cin>>num;

   ptr= new int[num];
    cout<<endl;
   for(int i=0;i<num;i++)
   {
       cout<<"Array no "<<i+1<<": ";
       cin>> ptr[i];
   }
   cout<<endl<<"Output:"<<endl;
   for(int i=0;i<num;i++)
   {
       cout<<ptr[i]<<" ";
   }
   delete []ptr;
}
