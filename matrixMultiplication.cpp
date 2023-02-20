#include<iostream>
using namespace std;
int main()
{
    int col1,col2,row1,row2;
    cin>>row1>>col1;
    cin>>row2>>col2;
    int m1[row1][col1];
    int m2[row2][col2];
    int mulmat[row1][col2];
    for (int i = 0; i < row1; i++)
    {
        for(int j=0;j<col1;j++)
            cin>>m1[i][j];
    }
    for (int i = 0; i < row2; i++)
    {
        for(int j=0;j<col2;j++)
            cin>>m2[i][j];
    }
    // PERFORMING MULTIPLICATION 

    //FOR THE TOTAL ROWS IN MATRIX ONE
    for (int i = 0; i < row1; i++)
    {
        //FOR THE TOTAL NUMBER OF COLUMNS IN MATRIX TWO
        for (int j = 0; j < col2; j++)
        {
            int sum=0;
            //FOR EACH ELEMENT IN THE COLUMN OF SECOND MATRIX
            for(int k=0;k<row2;k++)
                sum+=(m1[i][k]*m2[k][j]);
            mulmat[i][j]=sum;
        }
    }
    cout<<endl<<endl;
    for (int i = 0; i < row1; i++)
    {
        for(int j=0;j<col2;j++)
            cout<<mulmat[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}