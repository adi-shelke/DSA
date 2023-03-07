#include<iostream>
#include<cmath>
using namespace std;

int main()
{

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int num,flag=0;
    cin>>num;
    for (int i=2;i<=sqrt(num);i++)
    {
        if(num%i==0)
        {
            flag=1;
            break;
        }
            
    }
    if (flag==0)
        cout<<"Prime Number";
    else
        cout<<"Not a Prime Number";
    return 0;
}
