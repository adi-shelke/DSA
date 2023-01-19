#include<iostream>
using namespace std;
#define size 5
int queue[size];
int front=-1;
int rear=-1;

void enqueue(int data)
{
    if(front==-1 && rear==-1)
    {
        front=rear=0;
        queue[rear]=data;
    }
    else if(rear==size-1)
        cout<<"Queue is full"<<endl;
    else
    {
        rear++;
        queue[rear]=data;
    }
}
void dequeue()
{
    if(front==-1 && rear==-1)
        cout<<"Queue is empty";
    else if(front==rear)
        front=rear=-1;
    else 
        front++;
}
void display()
{
    if(front==-1 && rear==-1)
        cout<<"Queue is empty"<<endl;
    else
    {
    for(int i=front;i<=rear;i++)
        cout<<queue[i]<<" ";
    cout<<endl;
    }
}
int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    display();
    dequeue();
    display();
    dequeue();
    display();
    dequeue();
    display();
    dequeue();
    display();
    dequeue();
    enqueue(1);
    enqueue(2);
    enqueue(3);
    display();
}