#include"st.h"
// #include<iostream>
#include<bits/stdc++.h>
using namespace std;
int prec(char c)
{
    if(c=='^')
        return 3;
    else if (c == '/' || c == '*')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}
void infixToPostfix(string st)
{
    MyStack p;
    string result;
    for(int i=0;i<st.length();i++)
    {
        char c=st[i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
            || (c >= '0' && c <= '9'))
            result += c;
        else if (c == '(')
            p.push('(');
        else if (c == ')') {
            while (p.top() != '(') {
                result += p.top();
                p.pop();
            }
            p.pop();
        }
        else {
            while (p.head!=NULL
                   && prec(st[i]) <= prec(p.top())) {
                result += p.top();
                p.pop();
            }
            p.push(c);
        }

    }
     while (p.head!=NULL) {
        result += p.top();
        p.pop();
    }
    cout<<result<<endl;
}
void infixToPrefix(string st)
{
    MyStack p;
    string result;
    reverse(st.begin(),st.end());
    for(int i=0;i<st.length();i++)
    {
        char c=st[i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
            || (c >= '0' && c <= '9'))
            result += c;
        else if (c == ')')
            p.push(')');
        else if (c == '(')
        {
            while (p.top() != ')') {
                result += p.top();
                p.pop();
            }
            p.pop();
        }
        else {
            while (p.head!=NULL
                   && prec(st[i]) <prec(p.top())) {
                result += p.top();
                p.pop();
            }
            p.push(c);
        }        
    }
    while (p.head!=NULL) {
        result += p.top();
        p.pop();
    }
    reverse(result.begin(),result.end());
    cout<<result;
}
int main()
{
    infixToPostfix("a/b*(c/d-e)^(f+g*h)-i");
    infixToPrefix("x+y*z/w+u");
}