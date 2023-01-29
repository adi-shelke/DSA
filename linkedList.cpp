#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data=data;
        next=NULL;
    }
};
class LinkedList{
    public:
    Node* head=NULL;
    void insert(int data)
    {
        if(head==NULL)
        {
            Node* temp=new Node(data);
            head=temp;
        }
        else
        {
            Node* temp=head;
            while (temp->next!=NULL)
                temp=temp->next;
            temp->next=new Node(data);
        }
    }
    void inserAt(int data,int pos)
    {
        if(pos==1)
        {
            Node* temp=new Node(data);
            temp->next=head;
            head=temp; 
        }
        else
        {
            Node* temp=head;
            for (int i = 2; i < pos; i++)
                if(temp->next!=NULL)
                    temp=temp->next;
                else
                    break;
            Node* newNode=new Node(data);
            newNode->next=temp->next;
            temp->next=newNode;   
        }
    }
    void deleteAt(int pos)
    {
        if(pos==1)
        {
            Node* temp=head;
            head=temp->next;
            temp->next=NULL;
            delete temp;
        }
        else
        {
            Node* temp=head;
            for (int i = 2; i < pos; i++)
            {
                if(temp->next->next!=NULL)
                    temp=temp->next;
                else
                    break;
            }
            if(temp->next->next==NULL)
                temp->next=NULL;
            else
                temp->next=temp->next->next;
        }
    }
    void display()
    {
        Node* temp=head;
        while (temp->next!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<temp->data<<endl;
    }
};
int main()
{
    LinkedList list;
    list.insert(10);
    list.insert(30);
    list.insert(40);
    list.insert(50);
    list.inserAt(20,2);
    list.inserAt(5,1);
    list.inserAt(35,5);
    list.inserAt(80,10);
    list.inserAt(100,12);
    list.deleteAt(3);
    list.deleteAt(1);
    list.deleteAt(7);
    list.deleteAt(9);
    list.display();
}
