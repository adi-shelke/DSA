#include<iostream>
using namespace std;


bool binarySearch(int *arr,int start,int end, int target){
    int mid = (start+end)/2;
    if(start>end)
        return false;
    if(arr[mid] == target)
        return true;
    else if(arr[mid]>target)
        return binarySearch(arr,start,mid-1,target);
    else
        return binarySearch(arr,mid+1,end,target);
}

int main(){

    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int target = 11;
    cout<<binarySearch(arr,0,9,target);
    return 0;
}