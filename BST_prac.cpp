#include <iostream>
using namespace std;
class Node
{
public:
    Node *left;
    Node *right;
    int data;
    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

class BST
{
public:
    Node *insert(Node *root, int data)
    {
        if (root == NULL)
        {
            root = new Node(data);
        }

        else
        {
            Node *temp = root;
            if (data < temp->data)
                root->left = insert(temp->left, data);
            else
                root->right = insert(temp->right, data);
        }
        return root;
    }
    void displayInorder(Node* root)
    {
        if (root == NULL)
            return;
        else
        {
            displayInorder(root->left);
            cout << root->data<<" ";
            displayInorder(root->right);
        }
    }

    Node* findMin(Node* root){
        if(root==NULL)
            return root;
        Node* temp=NULL;
        while(root->left!=NULL)
            root=root->left;
        return root;
    }


    Node* deleteNode(Node* root, int data){
        if(root==NULL)
            return root;
        else if(data<root->data)
            root->left=deleteNode(root->left,data);
        else if(data>root->data)
            root->right= deleteNode(root->right,data);
        else{
            if(root->left==NULL && root->right==NULL){
                delete root;
                root==NULL;
            }
            else if(root->left==NULL){
                Node* temp = root;
                root=root->right;
                delete temp;
            }
            else if(root->right==NULL){
                Node* temp=root;
                root=root->left;
                delete temp;
            }
            else{
                Node* temp=findMin(root->right);
                root->data=temp->data;
                root->right=deleteNode(root->right,temp->data);
            }
        }
        return root;
    }
};

int main()
{
    BST bst;
    Node *root = NULL;
    root=bst.insert(root, 10);
    root=bst.insert(root, 5);
    root=bst.insert(root, 40);
    root=bst.insert(root, 20);
    root=bst.insert(root, 70);
    root=bst.insert(root, 90);
    root=bst.deleteNode(root,40);
    bst.displayInorder(root);
}