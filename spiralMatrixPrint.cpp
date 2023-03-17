#include<iostream>
using namespace std;
int main()
{
    int row,col;
    cin>>row>>col;
    int arr[row][col];
    for (int i=0;i<row;i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>arr[i][j];
        }
    }
        int rows=0,rowe=row-1,cols=0,cole=col-1;
    while (rows<=rowe && cols<=cole)
    {
        // for first row
        for (int col=cols;col<=cole;col++)
            cout<<arr[rows][col]<<" ";
        rows++;

        // for last column
        for (int row = rows; row <= rowe; row++)
            cout<<arr[row][cole]<<" ";
        cole--;

        //for last row
        for(int col=cole;col>=cols;col--)
            cout<<arr[rowe][col]<<" ";
        rowe--;

        //for first column
        for(int row=rowe;row>=rows;row--)
            cout<<arr[row][cols]<<" ";
        cols++;
    }
    return 0;
}