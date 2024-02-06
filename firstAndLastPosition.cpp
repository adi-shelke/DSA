#include <iostream>
using namespace std;

int  FirstOccurences(int *arr, int start, int end, int target)
{
    if (start > end)
        return -1;
    int mid = (start + end) / 2;
    if (arr[mid] == target){
        int index = mid;
        int newIndex = FirstOccurences(arr, start, mid - 1, target);
        if(newIndex!=-1)
            return newIndex;
        else
            return index;
    }
    else if (arr[mid] > target)
        return FirstOccurences(arr, start, mid - 1, target);
    else
        return FirstOccurences(arr, mid + 1, end, target);
    return -1;
}


int  LastOccurences(int *arr, int start, int end, int target)
{
    if (start > end)
        return -1;
    int mid = (start + end) / 2;
    if (arr[mid] == target){
        int index = mid;
        int newIndex = LastOccurences(arr, mid+1, end, target);
        if(newIndex!=-1)
            return newIndex;
        else
            return index;
    }
    else if (arr[mid] > target)
        return LastOccurences(arr, start, mid - 1, target);
    else
        return LastOccurences(arr, mid + 1, end, target);
    return -1;
}
int main()
{

    int arr[] = {0, 0, 1, 2, 2, 2, 2, 2};
    int target = 2;
    cout << "First Occurence: " << FirstOccurences(arr, 0, 7, target) << endl;
    cout << "Last Occurence: " << LastOccurences(arr, 0, 7, target) << endl;
}