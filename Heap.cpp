#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
void insert(vector <int> & arr, int el){
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
void heapify(vector <int> & arr,int i){
    int largest = i;
    int left = 2*i+1;
    int right = 2*i+2;

    if(left<arr.size()-1 && arr[left]>arr[largest])
        largest=left;
    if(right<arr.size()-1 && arr[right]>arr[largest])
        largest=right;
    if(largest!=i){
        swap(arr[i],arr[largest]);
        heapify(arr,largest);
    }
    cout.flush();
}
void deletion(vector <int> & arr,vector <int> & sorted){
    sorted.push_back(arr[0]);
    swap(arr[0],arr[arr.size()-1]);
    arr.pop_back();
    heapify(arr,0);
}
void heapSort(vector <int> & copy,vector <int> & sorted){
    while(copy.size()-1>0)
        deletion(copy,sorted);
    cout.flush();
}
int main(){
    vector <int> arr; // initializing a vector to store the heap in the form of array.
    vector <int> sorted;
    int size,el; // size for the element size of heap and el for taking each element as input
    cout<<"Enter the size of the heap: ";
    cin>>size;
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<size;i++){
        cin>>el;
        insert(arr,el);
    }
    cout<<"Printing the heap"<<endl;
    for(auto x: arr)
        cout<<x<<" ";
    cout<<endl;
    
    // deletion(arr,sorted);
    // for(auto x: arr)
    //     cout<<x<<" ";
    heapSort(arr,sorted);
    cout<<"Printing the heap sort"<<endl;
    for(auto x:sorted)
        cout<<x<<" ";
    cout<<endl;
}