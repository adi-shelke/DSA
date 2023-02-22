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
    int n,r;
    cin>>n>>r;
    cout<<factorial(n)/(factorial(r)*factorial(n-r));
    return 0;
}