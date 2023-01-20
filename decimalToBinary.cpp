#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
int main()
{

    int dec;
    cin>>dec;

    string b="";
    while(dec>0)
    {
        if (b=="")
            b=to_string(dec%2);
        else
            b=b+to_string(dec%2);
        dec=dec/2;
    }
    reverse(b.begin(),b.end());
    cout<<b;
    return 0;
}