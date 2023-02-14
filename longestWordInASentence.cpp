#include<iostream>
using namespace std;
int main()
{
    int size;
    cin>>size;
    char arr[size+1];
    cin.ignore();
    cin.getline(arr,size);

    int maxLen=0;
    int temp=0;
    int maxStart=0,tempStart=0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==' ' || arr[i]=='\0')
        {
            if(temp>maxLen)
            {
                maxLen=temp;
                temp=0;
                maxStart=tempStart;
                tempStart=i+1;
            }
            temp=0;
            tempStart=i+1;
        }
        else
            temp++;
    }
    cout<<"Length of longest word: "<<maxLen<<endl;
    for (int i = maxStart; i <=(maxStart+maxLen); i++)
        cout<<arr[i];
    return 0;
}