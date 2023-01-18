#include<iostream>
#include<vector>
using namespace std;
 
void pr(vector<int> vec)
{
    for(auto &i:vec)
        cout<<i<<" ";
}
int main()
{
    vector<int> vec ={1,2,4};
    pr(vec);
}