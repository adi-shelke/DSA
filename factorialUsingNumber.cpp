#include<iostream>
using namespace std;



int getFact(int num)
{
    int fact=1;
    for(int i=2;i<=num;i++)
    {
        fact*=i;
    }
    return fact;
}
int main()
{

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int num;
    cin>>num;
    cout<<getFact(num);
    return 0;
}