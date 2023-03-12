#include<iostream>
using namespace std;
int main()
{

    int size;
    cin>>size;
    int arr[size];
    for (int  i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < size-1; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if(arr[i]>arr[j])
            {
                int temp;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}