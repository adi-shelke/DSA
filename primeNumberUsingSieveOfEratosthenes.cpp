#include<iostream>
using namespace std;
int main()
{
    int size;
    cin>>size;
    int arr[size];
    for (int i = 1; i <=size; i++)
    {
        arr[i]=i+1;
    }
    
    for (int i = 2; i <=size; i++)
    {
        for(int j=i;(i*j<=size);j++)
        {
            arr[(i*j)-1]=0;
        }
    }
    for (int i = 1; i <size; i++)
    {
        if(arr[i]!=0)
            cout<<arr[i]<<" ";
    }
    
    return 0;
}