#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> factorial(int n){
    vector<int> res;
    res.push_back(1);
    int carry = 0;
    for(int i=2; i<=n; i++){
        for(int j=0; j<res.size(); j++){
            int prod = res[j]*i + carry;
            res[j] = prod%10;
            carry = prod/10;
        }
        while(carry){
            res.push_back(carry%10);
            carry /= 10;
        }
    }
    reverse(res.begin(), res.end());
    return res;
}
int main(){

    vector<int> res = factorial(25);
    for(auto x: res)
        cout<<x;
    return 0;
}