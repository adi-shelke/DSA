#include <bits/stdc++.h>
using namespace std;
char toLowerCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
        return ch;
    return ch - 'A' + 'a';
}
bool validCharacter(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
        return true;
    return false;
}
bool checkPalindrome(string s)
{
    int start = 0;
    int end = s.length() - 1;
    while (start < end)
        if (validCharacter(s[start]))
            if (validCharacter(s[end]))
                if (toLowerCase(s[start]) != toLowerCase(s[end]))
                    return false;
                else
                {
                    start++;
                    end--;
                }
            else
                end--;
        else
            start++;
    return true;
}