#include<iostream>
using namespace std;

int factorial(int num)
{
    int fact=1;
    for (int i=1;i<=num;i++)
    {
        fact*=i;
    }
    return fact;
 
}
int main()
{

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int rows;
    cin>>rows;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<factorial(i)/(factorial(j)*factorial(i-j))<<" ";
        }
        cout<<endl;
    }
    return 0;
}