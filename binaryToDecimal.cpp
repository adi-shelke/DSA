#include<iostream>
#include<math.h>
using namespace std;

int main()
{

    int b;
    cin>>b;
    int dec=0;

    int l=to_string(b).size();
    for(int i=0;i<l;i++)
    {
        dec=dec+((b%2)*(pow(2,i)));
        b=b/10;
    }
    cout<<dec;
    return 0;
}