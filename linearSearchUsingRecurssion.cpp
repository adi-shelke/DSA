#include <iostream>
using namespace std;

bool search(int *arr, int size, int target)
{
    if (size == 0)
        return false;
    if (arr[0] == target)
        return true;
    else
        return search(arr + 1, size - 1, target);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 6;
    cout << search(arr, 10, target);
    return 0;
}