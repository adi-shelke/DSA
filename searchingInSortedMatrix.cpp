#include<iostream>
using namespace std;
int main()
{
    int row,col;
    cin>>row>>col;
    int arr[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
            cin>>arr[i][j];
    }
    int key;
    cin>>key;
    //SEARCHING IN MATRIX
    for(int i=0;i<row;i++)
    {  
        for(int j=col-1;j>=0;j--)
        {
            if(arr[i][j]==key)
            {
                cout<<"Found at: "<<i<<" "<<j<<endl;
                return 0;
            }
            else
            {
                if(arr[i][j]<key)
                    {
                        if(arr[i+1][j]==key)
                        {
                            cout<<"Found at: "<<i+1<<" "<<j<<endl;
                            return 0;
                        }
                        else if(arr[i+1][j]<key)
                        {
                            i++;
                            break;
                        }
                    }
                else
                {
                    if(arr[i+1][j]==key)
                    {
                        cout<<"Found at: "<<i+1<<" "<<j<<endl;
                        return 0;
                    }
                    else if(arr[i+1][j]>key)
                        continue;
                }
            }
        }
    }
    cout<<"Not Found!";
    return 0;
}