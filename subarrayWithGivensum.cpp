#include<iostream>
using namespace std;
int main()
{
    int size;
    cin>>size;
    int sum=0;
    int ans;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cin>>ans;
    for (int i = 0; i < size; i++)
    {
        sum=arr[i];
        for (int j = i+1; j<size; j++)
        {
            if(sum==ans)
            {
                cout<<i+1<<" "<<j<<endl;
                return 0;
            }
            sum+=arr[j];
        }
    }
    cout<<-1;
    return 0;
}