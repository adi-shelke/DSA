#include <iostream>
using namespace std;
int main()
{

    int arr[] = {0, 1, 2, 2, 0, 1, 2, 1, 2, 1};
    int low = 0, mid = 0, high = 9;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            mid++;
            low++;
        }
        else if (arr[mid] == 1)
            mid++;
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
    for (int i = 0; i < 10; i++)
        cout << arr[i] << " ";
    return 0;
}