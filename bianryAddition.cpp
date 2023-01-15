#include<iostream>
#include<bits/stdc++.h>
using namespace std;


string getAddition(string b1, string b2)
{
    int l1,l2,carry=0;
    string add="";
    l1=b1.length();
    l2=b2.length();

    if (l1==l2)
    {
        while (b1!="")
        {
            int l1,l2;
            l1=b1.length();
            l2=b2.length();
            int last1,last2;
            last1=b1[l1-1]-48;
            last2=b2[l2-1]-48;

            if(last1==1 && last2 ==1)
            {
                if(carry==1)
                    add+='1';
                else
                {
                    add+='0';
                    carry=1;
                }
            }
            else if((last1 ==1 && last2 ==0)|| (last1 == 0 && last2 == 1))
            {
                if(carry==1)
                {
                    add+='0';
                    carry=1;
                }
                else
                    add+='1';
            }
            b1.pop_back();
            b2.pop_back();
        }
        if (carry==1)
            add+='1';
        reverse(add.begin(),add.end());
        return add;
    }
    else
    {
        if(l1>l2)
        {
            while (b2!="")
            {
                int l1,l2,last1,last2;
                l1=b1.length();
                l2=b2.length();

                last1=b1[l1-1]-48;
                last2=b2[l2-1]-48;
                if(last1==1 && last2==1)
                {
                    if(carry==1)
                        add+='1';
                    else
                    {
                        add+='0';
                        carry=1;
                    }
                }
                else if ((last1==1 && last2==0) || (last1==0 && last2==1))
                {
                    if (carry==1)
                    {
                        add+='0';
                        carry=1;
                    }
                    else
                        add+='1';
                }
                else if (last1==0 && last2==0)
                {
                    if(carry==0)
                        add+='0';
                    else
                    {
                        add+='1';
                        carry=0;
                    }
                }
                b1.pop_back();
                b2.pop_back();
            }
            while (b1!="")
            {
                int last,l;
                l=b1.length();

                last=b1[l-1]-48;
                if(last==1 && carry==1)
                {
                    add+='0';
                    carry=1;
                }
                else if(last==0 && carry==0)
                    add+='0';
                else if((last==1 && carry==0) || (last==0 && carry==1))
                {
                    add+='1';
                    carry=0;
                }
                b1.pop_back();
            }
            if(carry==1)
                add+='1';
            reverse(add.begin(),add.end());
            return add;   
        }
        if(l2>l1)
        {
            while (b1!="")
            {
                int l1,l2,last1,last2;
                l1=b1.length();
                l2=b2.length();

                last1=b1[l1-1]-48;
                last2=b2[l2-1]-48;
                if(last1==1 && last2==1)
                {
                    if(carry==1)
                        add+='1';
                    else
                    {
                        add+='0';
                        carry=1;
                    }
                }
                else if ((last1==1 && last2==0) || (last1==0 && last2==1))
                {
                    if (carry==1)
                    {
                        add+='0';
                        carry=1;
                    }
                    else
                        add+='1';  
                }
                else if (last1==0 && last2==0)
                {
                    if(carry==0)
                        add+='0';
                    else
                    {
                        add+='1';
                        carry=0;
                    }
                }
                b1.pop_back();
                b2.pop_back();
            }
            while (b2!="")
            {
                int last,l;
                l=b2.length();

                last=b2[l-1]-48;
                if(last==1 && carry==1)
                {
                    add+='0';
                    carry=1;
                }
                else if(last==0 && carry==0)
                {
                    add+='0';
                }
                else if((last==1 && carry==0) || (last==0 && carry==1))
                {
                    add+='1';
                    carry=0;
                }
                b2.pop_back();
            }
            if(carry==1)
                add+='1';
            reverse(add.begin(),add.end());
            return add;
        }
    }
}
int main()
{
    string b1,b2;
    cin>>b1>>b2;

    string sum;
    sum=getAddition(b1,b2);
    cout<<sum<<endl;
    return 0;
}