#include<iostream>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int num;
    cin>>num;

    for(int i=1;i<=num;i++)
    {
        for(int j=1;j<=i;j++)
            cout<<"* ";
        for(int j=1;j<=2*num-i*2;j++)
            cout<<"  ";
        for(int j=1;j<=i;j++)
            cout<<"* ";
        cout<<endl;
    }
    for(int i=num;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
            cout<<"* ";
        for(int j=1;j<=2*num-i*2;j++)
            cout<<"  ";
        for(int j=1;j<=i;j++)
            cout<<"* ";
        cout<<endl;
    }
    return 0;
}