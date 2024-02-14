#include<iostream>
using namespace std;
string reverse (string str,int start,int end){
    if(start>=end)
        return str;
    swap(str[start],str[end]);
    return reverse(str,start+1,end-1);
}
int main(){
    string str ="abcdef";
    cout<<"Reversed strinhg is: "<<reverse(str,0,str.length()-1);
}