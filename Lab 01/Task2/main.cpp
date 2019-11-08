#include <iostream>

using namespace std;

int main()
{
    int row, col;
    cout<<"Enter the size of Row: ";
    cin >> row;
    cout<<"Enter the size of col: ";
    cin>>col;

    string **ptr = new string* [row];

    for (int i = 0; i < row; i++) {
        ptr[i] = new string[col];
    }
    cout<<endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout<<"Enter Index no ["<<i+1<<"] ["<<j+1<<"] : ";
            cin >> ptr[i][j];
        }
    }
    cout<<endl<<"Output: "<<endl;
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cout << ptr[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < row; i++)
    {
        delete [] ptr[i];
    }
    delete [] ptr;

    return 0;
}
