#include<iostream>
#include<math.h>
#include <typeinfo>
using namespace std;
int getDec(string num)
{
    int dec,len,lastDigit;
    dec=0;
    len=num.length();
    for(int i=1;i<=len;i++)
    {
        char last=num[len-i];
        // cout<<"Last: "<<last<<endl;
        if(last=='A'|| last=='B'||last=='C'||last=='D'||last=='E'||last=='F')
        {
            switch (last)
            {
                case 'A':
                    lastDigit=10;
                    break;
                case 'B':
                    lastDigit=11;
                    break;
                case 'C':
                    lastDigit=12;
                    break;
                case 'D':
                    lastDigit=13;
                    break;
                case 'E':
                    lastDigit=14;
                    break;
                case 'F':
                    lastDigit=15;
                    break;
                default:
                    cout<<"Invalid Hexadecimal Number";
                    break;
            }
        }
        else
        {
            lastDigit=last - '0';
        }
        dec=dec+lastDigit*(pow(16,(i-1)));
        
    }
    return dec;
}
int main()
{

    string num;
    cin>>num;
    int dec=getDec(num);
    cout<<dec;
    return 0;
}