#include<iostream>
#include <queue>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
};
// class Queue{
//     public:
//     Node* queue[20];
//     int front,rear;
//     Queue(){
//     front=-1;
//     rear=-1;
//     }
//     void push(Node* node)
//     {
//         if(front==-1 && rear==-1)
//         {
//             front=rear=0;
//             queue[rear]=node;
//         }
//         else if((rear+1)%20==front)
//             cout<<"Queue is full";
//         else
//         {
//             rear=(rear+1)%20;
//             queue[rear]=node;
//         }
//     }
//     bool isEmpty()
//     {
//         if(front==-1 && rear==-1)
//             return true;
//         else
//             return false;
//     }
//     Node* pop()
//     {
//         if(front==rear)
//         {
//             Node* popped=queue[front];
//             front=-1;
//             rear=-1;
//         }
//         else
//         {
//         Node* popped=queue[front];
//         front=(front+1)%20;
//         return popped;
//         }
//     }
    
//     Node* frontNode()
//     {
//         return queue[front];
//     }
// };
class BST{
    public:
    Node* insert(int data,Node* root)
    {
        if(root==NULL)
            root=new Node(data);
        else
        {
            Node* temp=root;
            if(data<temp->data)
                root->left=insert(data,temp->left);
            else
                root->right=insert(data,temp->right);
        }
        return root;
    }
    void displayInorder(Node* root)
    {
        if(root==NULL)
            return;
        else
        {
            displayInorder(root->left);
            cout<<root->data<<" ";
            displayInorder(root->right);
        }
    }
    void displayPreorder(Node* root)
    {
        if(root==NULL)
            return;
        else
        {
            cout<<root->data<<" ";
            displayPreorder(root->left);
            displayPreorder(root->right);
        }
    }
    void displayPostorder(Node* root)
    {
        if(root==NULL)
            return;
        else
        {
            displayPostorder(root->left);
            displayPostorder(root->right);
            cout<<root->data<<" ";
        }
    }
    bool search(int key, Node* root)
    {
        if(root==NULL)
            return false;
        else if(root->data==key)
            return true;
        else if(root->data<key)
            search(key, root->right);
        else
            search(key,root->left);
    }
    void breadthFirstTraversal(Node* root)
    {
        queue<Node*> Q;
        if(root==NULL)
            return;
        Q.push(root);
        while (!Q.empty())
        {
            Node* temp=Q.front();
            cout<<temp->data<<" ";
            if(temp->left != NULL)
                Q.push(temp->left);
            if(temp->right != NULL)
                Q.push(temp->right);   
            Q.pop();
        }
    }
    void deleteNode(int data, Node* root)
    {

    }
    void calCulateHeight(Node* root)
    {

    }
};
int main()
{
    Node* root=NULL;
    BST bst;
    root=bst.insert(10,root);
    root=bst.insert(50,root);
    root=bst.insert(70,root);
    root=bst.insert(20,root);
    root=bst.insert(30,root);
    root=bst.insert(40,root);
    root=bst.insert(5,root);
    bst.displayInorder(root);
    cout<<endl;
    bst.displayPreorder(root);
    cout<<endl;
    bst.displayPostorder(root);
    cout<<endl;
    cout<<bst.search(10,root);
    cout<<endl;
    bst.breadthFirstTraversal(root);
}