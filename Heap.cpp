#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
void insert(vector <int> & arr, int size, int el){
    arr.push_back(el);
    int current,parent; // current to store the index of child and parent to store the index of the parent node.
    current=arr.size()-1;
    while (current>0){  //runnig the loop while current is greather than 0. If the current is zero, it means it is pointing to the root node and root node has no parent.
        parent=floor((current-1)/2);
        if(arr[parent]<arr[current]){ //swapping the parent and child only if the child is greater than the parent.
            swap(arr[parent],arr[current]);
            current=parent;
        }
        else
            return;
    }
}
int main(){
    vector <int> arr; // initializing a vector to store the heap in the form of array.
    int size,el; // size for the element size of heap and el for taking each element as input
    cout<<"Enter the size of the heap: ";
    cin>>size;
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<size;i++){
        cin>>el;
        insert(arr,size,el);
    }
    cout<<"Printing the heap"<<endl;
    for(auto x: arr)
        cout<<x<<" ";
}