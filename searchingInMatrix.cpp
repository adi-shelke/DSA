#include<iostream>
using namespace std;
int main()
{
    int row,col;
    int arr[row][col];
    cin>>row>>col;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>arr[i][j];
        }
    }
    int key;
    cin>>key;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j]==key)
            {
                cout<<"Element found at: "<<i<<" "<<j<<endl;
                return 0;
            }
            
        }
    }
    cout<<"Not found";
    
    return 0;
}