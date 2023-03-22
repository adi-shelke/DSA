#include<iostream>
using namespace std;
int getSum(int num)
{
    return (num*(num+1))/2;
}
int main()
{

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int num;
    cin>>num;

    cout<<getSum(num);
    return 0;
}