#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
};
class Stack
{
    Node* head;
    public:
    Stack()
    {
        head=NULL;
    }

    void push(int x)
    {
        Node *temp;
        // cout<<"Inside push"<<endl;
        if(temp==NULL)
            cout<<"Stack Overflow"<<endl;
        else{
            // cout<<"Inside else";
            temp->data=x;
            temp->next=head;
            head=temp;
            cout<<"Element Pushed"<<endl;
        }
    }
    void pop()
    {
        if(head==NULL)
            cout<<"Stack Underflow";
        Node *temp=head;
        head=temp->next;
        temp->next=NULL;
        delete temp;
        cout<<"Element Popped";
    }
    void display()
    {
        if(head==NULL)
            cout<<"Stack is empty";       
        else{
            Node *temp=head;
            while(temp!=NULL)
            {
                cout<<temp->data<<" ";
                temp = temp->next;
            }
            cout<<endl;
        }
    }
    void peek()
    {
        if(head==NULL)
            cout<<"Stack is Empty";
        else
            cout<<head->data;
    }
};
int main()
{
    Stack s;
    s.push(5);
    s.push(6);
    s.push(7);
    s.push(8);
    s.push(9);
    s.push(10);
    s.display();
}