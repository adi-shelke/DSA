#include<iostream>
using namespace std;
int main()
{

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int num;
    cin>>num;

    int reversed=0;
    for(int i=0;num>0;i++)
    {
        int last=num%10;
        num=num/10;
        reversed=reversed*10+last;
    }
    cout<<"Reversed Number: "<<reversed<<endl;
    return 0;
}