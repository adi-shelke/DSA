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
    void calculateDepth(Node* root)
    {

    }
    void calculateHeight(Node* root)
    {

    }
    void findMin(Node* root)
    {
        if(root==NULL)
            return;
        else
        {
            Node* temp=root;
            while (temp->left!=NULL)
                temp=temp->left;
            cout<<"Min Node: "<<temp->data<<endl;
        }

    }
    void findMax(Node* root)
    {
        if(root==NULL)
            return;
        else
        {
            Node* temp=root;
            while (temp->right!=NULL)
                temp=temp->right;
            cout<<"Max Node: "<<temp->data<<endl;
        }
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
    cout<<"Search result of 10 is: "<<bst.search(10,root);
    cout<<endl;
    bst.breadthFirstTraversal(root);
    cout<<endl;
    bst.findMin(root);
    bst.findMax(root);
}