#include<iostream>
using namespace std;
int search(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;
    while (start<=end)
    {
        int mid=(start+end)/2;
        if(key==arr[mid])
            return mid;
        else if(key>arr[mid])
            start=mid+1;
        else if(key<arr[mid])
            end=mid-1;
    }
    return -1;
    
    
}
int main()
{
    int size,key;
    cin>>size;
    int arr[size];

    for(int i=0;i<size;i++)
        cin>>arr[i];
    cin>>key;
    int ret=search(arr,size,key);
    if(ret==-1)
        cout<<"Element not found"<<endl;
    else
        cout<<"Element found at "<<ret<<endl;
    return 0;
}