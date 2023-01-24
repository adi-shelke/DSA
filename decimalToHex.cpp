#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int dec;
    cin>>dec;
    string hex="NULL";
    while (dec>0)
    {
        if(hex=="NULL")
        {
            if (dec%16>9)
            {
                switch (dec%16)
                {
                    case 10:
                        hex="A";
                        break;
                    case 11:
                        hex="B";
                        break;
                    case 12:
                        hex="C";
                        break;
                    case 13:
                        hex="D";
                        break;
                    case 14:
                        hex="E";
                        break;
                    case 15:
                        hex="F";
                        break;
                
                    default:
                        cout<<"Invalid 1";
                        break;
                }
            }
            else
                hex=to_string(dec%16);
        }
        else
        {
            if (dec%16>9)
            {
                switch (dec%16)
                {
                case 10:
                    hex=hex+"A";
                    break;
                case 11:
                    hex=hex+"B";
                    break;
                case 12:
                    hex=hex+"C";
                    break;
                case 13:
                    hex=hex+"D";
                    break;
                case 14:
                    hex=hex+"E";
                    break;
                case 15:
                    hex=hex+"F";
                    break;
                
                default:
                cout<<"Invalid 2";
                    break;
                }
            }
            else
                hex=hex+to_string(dec%16);
        }
        dec=dec/16;
    }
    reverse(hex.begin(), hex.end());
    cout<<hex;
    return 0;
}