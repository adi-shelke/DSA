#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int start, int end)
{
    int pivot = arr[start];
    int count = 0;
    for (int i = start + 1; i <= end; i++)
        if (arr[i] <= pivot)
            count++;
    int pivotIndex = start + count;
    swap(arr[start], arr[pivotIndex]);
    int i = start, j = end;
    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i < pivotIndex && j > pivotIndex)
            swap(arr[i], arr[j]);
    }
    return pivotIndex;
}
void quickSort(vector<int> &arr, int start, int end)
{
    if (start >= end)
        return;
    int p = partition(arr, start, end);
    quickSort(arr, start, p - 1);
    quickSort(arr, p + 1, end);
}
int main()
{

    vector<int> arr = {9, 9 ,9 ,8, 2, 3, -6};
    quickSort(arr, 0, arr.size() - 1);
    for (auto i : arr)
        cout << i << " ";
}