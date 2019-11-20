#include <iostream>

using namespace std;

int main()
{
    int i, j, row, col;

    cout << "Enter the number of rows: ";
    cin >> row;
    cout << "Enter the number of columns: ";
    cin >> col;

    char **arr = new char *[row];
    for (i = 0; i < row; i++)
    {
        arr[i] = new char [col];
    }

    cout << endl << "Input: " << endl;
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++ )
        {
            cin >> arr[i][j];
        }
    }

    cout << endl << "Output: " << endl;
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++ )
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for(i = 0; i < row; i++)
    {
        delete [] arr[i];
    }

    delete [] arr;

    return 0;
}
