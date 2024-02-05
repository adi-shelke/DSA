#include <iostream>
using namespace std;

bool isSorted(int arr[], int n, int size)
{

    if (n == (size)-1)
        return true;

    if (arr[n] > arr[n + 1])
        return false;
    return isSorted(arr, n + 1, size);
}

int main()
{
    int arr[] = {1, 3, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << isSorted(arr, 0, 10);
    return 0;
}