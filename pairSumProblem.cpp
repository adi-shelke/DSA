#include<iostream>
using namespace std;

int main()
{
    int count;
    cin>>count;
    int arr[count];
    for (int i = 0; i < count; i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int start=0,end=count-1;
    while (start<end)
    {
        if(arr[start]+arr[end]==key)
        {
            cout<<start<<" "<<end;
            return 0;
        }
        else if(arr[start]+arr[end]>key)
            end--;
        else
            start++;
    }
    cout<<"Not found";
    cout<<"not found";
    return 0;
}