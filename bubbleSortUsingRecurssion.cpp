#include<iostream>
using namespace std;

void bubbleSort(int *arr,int size){
    if(size<2)
        return;
    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1])
            swap(arr[i],arr[i+1]);
    }
    bubbleSort(arr,size-1);
}

int main(){
    int arr[] = {5,5,5,5,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,size);
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
}