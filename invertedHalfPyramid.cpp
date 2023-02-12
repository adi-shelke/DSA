#include<iostream>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int num;
    cin>>num;

    for(int i=0;i<num;i++)
    {
        for(int j=0;j<num-i;j++)
            cout<<"* ";
        cout<<endl;
    }
    return 0;
}