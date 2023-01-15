#include<iostream>
using namespace std;
int main()
{

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int num,sum=0;
    cin>>num;
    int temp=num;

    for (int i=0;temp>0;i++)
    {
        int last=temp%10;
        temp=temp/10;
        sum+=(last*last*last);
    }
    if (sum==num)
        cout<<"Number is ArmStrong";
    else
        cout<<"Number is not ArmStrong";
    return 0;
}