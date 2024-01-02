#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Students{
    public:
    string name;
    int subSize;
    string sub[2];
};
int main()
{
    int size,subSize;
    // cout<<"Enter the size of students"<<endl;
    cin>>size;
    Students arr[size];
    for(int i=0;i<size;i++)
    {
        // cout<<"Enter the name of student:- ";
        cin>>arr[i].name;
        cout<<endl;
        // cout<<"Enter the number of favourite subjects of student:- ";
        cin>>subSize;
        arr[i].subSize=subSize;
        // cout<<"Enter the favourite subjects:- ";
        for(int j=0;j<subSize;j++)
            cin>>arr[i].sub[j];
    }
        int mathsStud=0,scienceStud=0,either=0;
    for(int i=0;i<size;i++)
    {
        // cout<<"Name:- "<<arr[i].name<<endl;
        // cout<<"Subjects:- ";
        // for(int j=0;j<2;j++)
        // {
        //     cout<<arr[i].sub[j]<<" ";
        // }
        // cout<<endl;
        if(arr[i].subSize==1)
        {
            either++;
            for(int j=0;j<2;j++)
            {
                if(arr[i].sub[j]=="maths")
                    mathsStud++;
                else if(arr[i].sub[j]=="science")
                    scienceStud++;
            }
        }
    }
    cout<<"Math only:- "<<mathsStud<<endl;
    cout<<"Science only:- "<<scienceStud<<endl;
    cout<<"Either:- "<<either<<endl;
    return 0;
}
