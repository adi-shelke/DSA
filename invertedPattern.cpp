#include<iostream>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int num;
    cin>>num;

    for(int i=num;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
            cout<<j<<" ";
        cout<<endl;
    }
    return 0;
}