#include<iostream>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int  num;
    cin>>num;

    for(int i=1;i<=num;i++)
    {
        int pr=i;
        int f=0;
        for(int j=1;j<=num-i;j++)
            cout<<"  ";
        for(int j=1;j<=2*i-1;j++)
        {
             if(pr==1)
            {
                f=1;
                cout<<pr<<" ";
                pr++;
            }
            else
            {
            cout<<pr<<" ";
            if(f==0)
            {
               pr--;
            }
                
            else
                pr++;
            } 
        }
        cout<<endl;
    }
    return 0;
}