#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string s1;
    cin>>s1;

    //USING THE LOGIC

    // for(int i=0;i<(s1.length());i++)
    // {
    //     s1[i]=toupper(s1[i]);
    // }
    // cout<<s1<<endl;
    // for (int i = 0; i < (s1.length()); i++)
    // {
    //     s1[i]=tolower(s1[i]);
    // }
    // cout<<s1<<endl;
    


    //USING BUILT IN FUNCTIONS


    transform(s1.begin(),s1.end(),s1.begin(),::toupper);
    cout<<s1<<endl;
    transform(s1.begin(),s1.end(),s1.begin(),::tolower);
    cout<<s1<<endl;


    return 0;
}