#include <iostream>
#include <vector>
using namespace std;

int pivotIndex(vector<int> &nums, int start, int end)
{
    if (nums[start] <= nums[end])
        return start;
    int mid = start + (end - start) / 2;
    if (start >= end)
        return start;
    if (nums[mid] >= nums[0])
        return pivotIndex(nums, mid + 1, end);
    else
        return pivotIndex(nums, start, mid);
}
int binarySearch(vector<int> &arr, int start, int end, int target)
{
    int mid = start + (end - start) / 2;
    if (start > end)
        return -1;
    if (arr[mid] == target)
        return mid;
    else if (arr[mid] > target)
        return binarySearch(arr, start, mid - 1, target);
    else
        return binarySearch(arr, mid + 1, end, target);
}

int search(vector<int> &arr, int n, int k)
{
    int pivot = pivotIndex(arr, 0, n - 1);
    
    // If the target is greater than the last element, search on the left side of the pivot
    if (k > arr[n - 1])
        return binarySearch(arr, 0, pivot - 1, k);
    else // Otherwise, search on the right side of the pivot
        return binarySearch(arr, pivot, n - 1, k);
}

int main()
{

    vector<int> arr = {2, 3, 5, 8};
    int target = 3;
    cout << search(arr, arr.size(), target);
    return 0;
}