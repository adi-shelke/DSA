#include<iostream>
using namespace std;
int main()
{
    int size;
    cin>>size;
    int arr[size];
    int sum=0,tsum;
    for (int i = 0; i < size; i++)
        cin>>arr[i];
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            tsum=0;
            for (int k = i; k <=j; k++)
            {
                // cout<<arr[k]<<" ";
                tsum+=arr[k];
            }
            sum=max(sum,tsum);
            cout<<endl; 
        } 
    }
    cout<<sum;
    return 0;
}