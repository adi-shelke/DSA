#include <iostream>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int a,b,c;
    cin>>a>>b>>c;

    if (a>b)
    {
        if(a>c)
            cout<< a <<" is greater";
        else
            cout<< c <<" is greater";
    }
    else if (b>a)
    {
        if(b>c)
            cout<< b <<" is greater";
        else 
            cout<< c <<" is greater";
    }
    else
        cout<<"all three are equal";
}