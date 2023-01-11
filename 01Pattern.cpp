#include<iostream>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int num;
    cin>>num;
    int pr=1;
    for(int i=1;i<=num;i++)
    {
        if(i%2!=0)
            pr=1;
        for(int j=1;j<=i;j++)
        {
            cout<<pr<<" ";
            pr=!pr;
        }
        cout<<endl;
    }
    return 0;
}