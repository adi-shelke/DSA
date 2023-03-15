#include<iostream>
#include<bits/stdc++.h>
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
    cout<<endl;
    int mini;
    for(int i=0;i<size-1;i++)
    {
        mini=i;
        for (int j = i+1; j < size; j++)
        {
            if(arr[j]<arr[mini])
                mini=j;
        }
        if(mini!=i)
        {
            int temp=arr[i];
            arr[i]=arr[mini];
            arr[mini]=temp;
        }
    }
    int k=1;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]>0)
        {
            if(k!=arr[i])
            {
                cout<<k;
                return 0;
            }
            k++;
        }          
    }    
    return 0;
}