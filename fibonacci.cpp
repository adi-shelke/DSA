#include<iostream>
using namespace std;
void fib(int num)
{
    int first,second;
    first=0;
    second=1;
    for(int i=1;i<=num;i++)
    {
        cout<<first<<" ";
        int temp=first+second;
        first=second;
        second=temp;
    }
    return;
    
}
int main()
{

    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

    int num;
    cin>>num;

    fib(num);
    return 0;
}