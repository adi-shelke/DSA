#include <iostream>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int val;
    cin>>val;
    if (val%2==0)
        cout<<"Even";
    else
        cout<<"Odd";

}