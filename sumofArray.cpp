#include <iostream>
using namespace std;

int sumofArray(int arr[], int size, int index)
{
    if (index == size - 1)
        return arr[index];
    return arr[index] + sumofArray(arr, size, index + 1);
}
int main()
{

    int arr[] = {3, 2, 5, 1, 6};
    cout << "Sum of array is " << sumofArray(arr, 5, 0);
    return 0;
}