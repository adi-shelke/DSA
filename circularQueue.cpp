#include<iostream>
using namespace std;
#define size 5
int cqueue[size];
int front=-1;
int rear=-1;

void enqueue(int data)
{
    if(front==-1 && rear==-1)
    {
        front=rear=0;
        cqueue[rear]=data;
    }
    else if((rear+1)%size==front)
        cout<<"The Queue is full"<<endl;
    else
    {
        rear=(rear+1)%size;
        cqueue[rear]=data;
    }
}
void dequeue()
{
    if(front==-1 && rear ==-1)
        cout<<"The Queue is empty"<<endl;
    else if (front==rear)
        front=rear=-1;
    else
        front=(front+1)%size;
}
void display()
{
    if(front==-1 && rear==-1)
        cout<<"The Queue is empty";
    else
    {
        int i=front;
        for(i;i!=rear;i=(i+1)%size)
            cout<<cqueue[i]<<" ";
        cout<<cqueue[i];
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
    dequeue();
    enqueue(6);
    dequeue();
    enqueue(7);
    display();
}