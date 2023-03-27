#include<iostream>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    char character;
    cin>>character;

    switch (character)
    {
    case 'a':
        cout<<"This is a";
        break;
    case 'b':
        cout<<"This is b";
        break;
    case 'c':
        cout<<"This is c";
        break;
    default:
        break;
    }
    return 0;
}