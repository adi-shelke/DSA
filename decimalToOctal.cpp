#include<iostream>
using namespace std;

int getDecimal(int num)
{
    int dec=0;
    int revNum=0;
    for(int i=0;num>0;i++)
    {
        int rem=num%8;
        dec=10*dec+rem;
        num=num/8;
    }
    for(int i=0;dec>0;i++)
    {
        int last=dec%10;
        dec=dec/10;
        revNum=10*revNum+last;
    }
    return revNum;
    
}
int main()
{
    int  num;
    cin>>num;
    int dec=getDecimal(num);
    cout<<dec;
    return 0;
}