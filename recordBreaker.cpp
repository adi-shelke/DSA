#include<iostream>
using namespace std;
int main()
{
    int size;
    cin>>size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
       cin>>arr[i];
    }
    int m,counter=0;
    m=arr[0];
    for(int i=1;i<size;i++)
    {
        if(i==size-1&&arr[i]>m)
            counter++;
        else
        {
            if(arr[i]>m && arr[i]>arr[i+1])
            {       
                counter++;
                m=arr[i];
            } 
        }
    }
    cout<<counter;
    return 0;
}