#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr, int start, int mid, int end){
    int length1 = mid-start+1;
    int length2 = end-mid;

    int *leftPart = new int[length1];
    int *rightPart = new int[length2];

    int mainIndex = start;

    for(int i=0;i<length1;i++){
        leftPart[i] = arr[mainIndex++];
    }
    for(int i=0;i<length2;i++){
        rightPart[i] = arr[mainIndex++];
    }

    //merging the two arrays
    mainIndex = start;
    int i=0,j=0;
    while(i<length1 && j<length2){
        if(leftPart[i]<rightPart[j]){
            arr[mainIndex++] = leftPart[i++];
        }else{
            arr[mainIndex++] = rightPart[j++];
        }
    }
    while(i<length1){
        arr[mainIndex++] = leftPart[i++];
    }
    while(j<length2){
        arr[mainIndex++] = rightPart[j++];
    }

}
void mergeSort(vector<int> &arr, int start, int end){
    if(start<end){
        int mid = start+(end-start)/2;
        mergeSort(arr,start,mid);
        mergeSort(arr,mid+1,end);

        merge(arr,start,mid,end);
    }

}
int main(){
    vector<int> arr = {5,6,7,1,2,3};
    mergeSort(arr, 0, arr.size()-1);

    for(auto i:arr){
        cout<<i<<" ";
    }
}