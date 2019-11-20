#include <iostream>

using namespace std;

int main()
{
    int s, i;

    cout << "Enter the size of the array: ";
    cin >> s;

    int *arr = new int [s];

    cout << endl << "Input: " << endl;
    for (i = 0; i < s; i++)
    {
        cin >> arr[i];
    }

    cout << endl << "Output: " << endl;
    for (i = 0; i < s; i++)
    {
        cout << arr[i];
    }
    cout << endl;

    delete [] arr;
    return 0;
}
