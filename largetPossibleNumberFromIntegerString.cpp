#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cin>>s;

     
    //USING THE SORT FUNCTION ONLY
    sort(s.begin(),s.end(),greater<int>());


    //ANOTHER WAY USING SORT AND REVERSE FUNCTION
    sort(s.begin(),s.end());
    reverse(s.begin(),s.end());
    cout<<s<<endl;
    return 0;
}