#include<iostream>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int first,last;
    cin>>first>>last;

    for (int i = first; i < last; i++)
    {
        int j;
        for (j = 2; j < i; j++)
        {
            if (i%j==0)
            {
                break;
            }
        }
        if (j==i)
            cout<<i<<" ";  
    }
    
}