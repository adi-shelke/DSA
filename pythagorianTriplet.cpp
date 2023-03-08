#include<iostream>
#include<math.h>
using namespace std;
bool check(int a, int b, int c)
{
    int m=max(a,max(b,c));
    if (a==m)
    {
        a=b;
        b=c;
    }
    else if(b==m)
    {
        b=c;
    }

int sq=pow(a,2)+pow(b,2)+0.5;
int mq=pow(m,2)+0.5;
//  if(pow(m,2)==(pow(a,2)+pow(b,2)))
    if(mq==sq)
    {
         return true;
    }
       
    else
        return false;
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(check(a,b,c))
        cout<<"Pythagorian Triplet";
    else
        cout<<"Not a pythagorian triplet";
}