#include<iostream>
using namespace std;
int main()
{
    int count;
    cin>>count;
    int arr[count];
    for (int i = 0; i < count; i++)
        cin>>arr[i];
    for (int i = 1; i < count; i++){
        int key=arr[i];
        int j=i-1;
        while (arr[j]>key && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    for (int i = 0; i < count; i++)
        cout<<arr[i]<<" ";
}