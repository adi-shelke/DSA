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

    for (int i = 0; i < size; i++)
    {
        int m=arr[i];
        for (int j = 0; j <= i; j++)
            m=max(m,arr[j]);    
        cout<<"Till "<<i<<" max is "<<m<<endl;
    }
    
    
    return 0;
}