#include<iostream>
using namespace std;
int main()
{
    int size;
    cin>>size;
    int arr[size][size];
    for (int i = 0; i < size; i++)
    {
        for(int j=0;j<size;j++)
            cin>>arr[i][j];
    }
    for(int i=0;i<size;i++)
    {
        for(int j=i;j<size;j++)
        {
            if(i==j)
                continue;
            else
                swap(arr[i][j],arr[j][i]);
        }
    }
    for (int i = 0; i < size; i++)
    {
        for(int j=0;j<size;j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }
    
    return 0;
}