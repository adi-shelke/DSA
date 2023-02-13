#include<iostream>
using namespace std;
int search(int arr[],int key,int size)
{
    int i=0;
    for (;i <size; i++)
    {
        if (key==arr[i])
            return i;
    }
    return -1;
    
}
int main()
{
    int key,size;
    cin>>size;
    int arr[size];
    for (int  i = 0; i < size; i++)
        cin>>arr[i];
    cin>>key;
    int ret=search(arr,key,size);
    if(ret==-1)
        cout<<"Element not found"<<endl;
    else
        cout<<"Element found at index: "<<ret<<endl;
    return 0;
}