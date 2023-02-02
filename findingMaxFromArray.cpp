#include<iostream>
using namespace std;
int main()

{
    int size,maxi,mini;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
        cin>>arr[i];

    maxi=arr[0];
    mini=arr[0];
    for (int i = 1; i < size; i++)
    {
        maxi=max(maxi,arr[i]);
        mini=min(mini,arr[i]);
    }
    cout<<"Max: "<<maxi<<endl;
    cout<<"Min: "<<mini<<endl;
    return 0;
}