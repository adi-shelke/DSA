#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "Enter the number of rows: ";
    cin >> row;

    int **arr = new int *[row];
    int *columnSize = new int[row];
    for (int i = 0; i < row; i++)
    {
        cout << "Enter the size of column for " << i << "th row: ";
        cin >> columnSize[i];
        for (int j = 0; j < columnSize[i]; j++)
            arr[i] = new int[columnSize[i]];
    }

    // taking input values
    for (int i = 0; i < row; i++)
    {
        cout << "Enter the values of " << i << "th row" << endl;
        for (int j = 0; j < columnSize[i]; j++)
            cin >> arr[i][j];
    }
    cout<<"The jagged array is: "<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < columnSize[i]; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    return 0;
}