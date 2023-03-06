#include<iostream>
using namespace std;
int isPrime(int);
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r", stdin);
        freopen("output.txt","w", stdout);
    #endif
    
    int num;
    cin>>num; 
    if(isPrime(num))
        cout<<num<<" is a prime number";
    else
        cout<<num<<" is not a prime number";
}
int isPrime(int num)
{
    for(int i=2;i<num;i++)
    {
        if (num%i==0)
            return 0;
    }
    return 1;
}