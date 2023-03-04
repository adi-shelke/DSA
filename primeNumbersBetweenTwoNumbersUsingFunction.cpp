#include<iostream>
using namespace std;
#include<cmath>
void getPrime(int start,int end)
{
    for(int i=start;i<=end;i++)
    {
        int j;
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
                break;
        }
        if(j==i)
            cout<<i<<" ";
    }
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int start,end;
    cin>>start>>end;
    getPrime(start,end);
    return 0;
}