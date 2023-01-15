#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,2,3,3};
    int darr[5];
    int count=0;
    for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++)
    {
        
        for(int j=0;j<(sizeof(arr)/sizeof(arr[0]));j++)
        {
            if(i==j)
                continue;
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        darr[i]=count;
        count=0;
    }
    for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++)
    {
        for(int j=0;j<(sizeof(arr)/sizeof(arr[0]));j++)
        {
            if(i==j)
                continue;
            if(darr[i]==darr[j])
            {
                cout<<"False";
                return 0;
            }
        }
        cout<<"True";
        return 0;
    }
    // for(int i=0;i<5;i++)
    //     cout<<darr[i]<<" ";
}