#include<iostream>
#include<math.h>
using namespace std;

int getDecimal(int num)
{
    int dec=0;
    int len=to_string(num).length();
    for(int i=0;i<len;i++)
    {
        int last=num%10;
        dec =dec+ last*(pow(8,i));
         num=num/10;
    }
    return dec;
}
int main()
{

    int num;
    cin>>num;

    int dec=getDecimal(num);
    cout<<dec;
    return 0;
}