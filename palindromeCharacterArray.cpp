#include <iostream>
using namespace std;
int main()
{
    int size;
    cin>>size;
    char name[size];
    cin>>name;

    for (int i = 0; i <(size/2); i++)
    {
        cout<<name[i]<<" "<<name[size-(i+1)]<<endl;
        if(toupper(name[i])!=toupper(name[size-(i+1)]))
        {
            cout<<"Not a palindrome";
            return 0;
        }
    }
    cout<<"Palindrome";
    
    return 0;
}