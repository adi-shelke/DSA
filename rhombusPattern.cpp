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
        for(int j=1;j<=num-i;j++)
            cout<<"  ";
        for(int j=1;j<=num;j++)
            cout<<"* ";
        cout<<endl;
    }
    return 0;
}