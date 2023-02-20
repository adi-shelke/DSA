#include<iostream>
using namespace std;
// int main()
// {
//     int counter=0,size;
//     cin>>size;
//     int arr[size];
//     for (int i = 0; i < size; i++)
//     {
//         cin>>arr[i];
//     }
    
//     int diff=0,count=0;
//     for (int i = 0; i < size-1; i++)
//     {
//         if(i==0)
//         {
//             diff=(arr[i+1]-arr[i]);
//             count++;
//         }
//         else if(diff==arr[i+1]-arr[i])
//             count++;
//         else
//         {
//             counter=max(count,counter);
//             count=0;
//             count++;
//             diff=arr[i+1]-arr[i];
//         }
//     }
    
//     cout<<counter+1;
    
//     return 0;
// }

int main()
{
    int size,counter=2,diff;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
        cin>>arr[i];   

    diff=arr[1]-arr[0];
    int count=2;
    int i=2;
    while (i<size)
    {
        if(diff==arr[i]-arr[i-1])
            count++;
        else
        {
            diff= arr[i]-arr[i-1];
            counter=max(counter,count); 
            count=2;
        }  
        i++;
    }
    cout<<counter;
    return 0;
    
}