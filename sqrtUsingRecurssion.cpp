#include<iostream>
using namespace std;

int sqrt(int n,int start,int end){
    if(start>end)
        return -1;
    int mid = start + (end-start)/2;
    if(mid*mid == n)
        return mid;
    else if(mid*mid > n)
        return sqrt(n,start,mid-1);
    else
        return sqrt(n,mid+1,end);
}
int main(){
    int n = 144;
    cout<<"Square root of "<<n<<" is "<<sqrt(n,0,n)<<"\n"; // "Square root of 81 is 9
    return 0;
}