#include<iostream>
using namespace std;
class Solution{
    public:
    bool solution(int x){
        if(x<0)
            return false;
        int init=x;
        int remainder,reverse=0;
        while (x!=0)
        {
            remainder=x%10;
            reverse=reverse*10+remainder;
            x=x/10;
        }
        if(init==reverse)
            return true;
        return false;
        
    }
};

int main(){
    Solution s;
    cout<<s.solution(-121);
}