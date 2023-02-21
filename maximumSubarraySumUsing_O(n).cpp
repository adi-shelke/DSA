#include<iostream>
using namespace std;
int main()
{

    int size;
    cin>>size;
    int arr[size];
    for (int i = 0; i < size; i++)
        cin>>arr[i];
    int m=0,tsum=0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]<0)
        {
            m=max(m,tsum);
            tsum=0;
        }
        else
            tsum+=arr[i];
    }
    m=max(m,tsum);
    cout<<m;
    
    return 0;
}