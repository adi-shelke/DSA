#include <iostream>
using namespace std;
int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int prev = 0;
    int next = 1;

    while (next < (sizeof(arr) / sizeof(int)))
    {
        swap(arr[prev], arr[next]);
        prev += 2;
        next += 2;
    }

    for (int i = 0; i < (sizeof(arr) / sizeof(int)); i++)
        cout << arr[i] << " ";
    return 0;
}