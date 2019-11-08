#include <iostream>

using namespace std;

int main()
{
   int row;
    cout<<"Enter the Size of Row: ";
    cin >> row;

    int colArray[row];
    int** ptr = new int*[row];

    for(int i=0; i<row; i++)
    {
        cout<<"Enter the Uneven Number "<<i+1<<": ";
        cin>>colArray[i];
    }
    cout<<endl;
    for(int i=0;i<row;i++)
    {
        ptr[i]= new int[colArray[i]];
    }

    for(int i=0; i<row; i++){
        for(int j=0; j<colArray[i]; j++){
            cout<<"Array no ["<<i+1<<"] ["<<j+1<<"]: ";
            cin >> ptr[i][j];
        }
    }
    cout<<endl<<"Output: "<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<colArray[i]; j++){
            cout << ptr[i][j] << " ";
        }
        cout << endl;
    }

    delete [] ptr;

    return 0;
}
