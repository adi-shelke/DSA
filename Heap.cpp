#include<iostream>
#include<vector>
using namespace std;

void insert(vector <int> arr, int size, int el){
    
}
int main(){
    vector <int> arr; // initializing a vector to store the heap in the form of array.
    int size,el; // size for the element size of heap and el for taking each element as input
    cout<<"Enter the size of the heap: ";
    cin>>size;
    cout<<"Enter ther elements"<<endl;
    for(int i=0;i<size;i++){
        cin>>el;
        insert(arr,size,el);
    }
        
    
}