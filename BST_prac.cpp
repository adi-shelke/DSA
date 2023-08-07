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
        displayInorder(root->left);
        cout << root->data<<" ";
        displayInorder(root->right);
    }
    void displayPostorder(Node* root){
        if(root==NULL)
            return;
        displayPostorder(root->left);
        displayPostorder(root->right);
        cout<<root->data<<" ";
    }
    void displayPreorder(Node* root){
        if(root==NULL)
            return;
        cout<<root->data<<" ";
        displayPreorder(root->left);
        displayPreorder(root->right);
    }

    Node* findMin(Node* root){
        if(root==NULL)
            return root;
        while(root->left!=NULL)
            root=root->left;
        return root;
    }

    Node* findMax(Node* root){
        if(root==NULL)
            return root;
        while(root->right!=NULL)
            root=root->right;
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
    
    int calHeight(Node* root){
        int height;
        if(root==NULL)
            return -1;
        return max(calHeight(root->right),calHeight(root->left))+1;
    }
    
    bool search(Node* root, int key){
        while (root!=NULL)
        {
            if(root->data==key)
                return true;
            else if(key<root->data)
                root=root->left;
            else
                root=root->right;
        }
        return false;
    }

    // void levelWiseDisplay(Node* root)
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
    root=bst.insert(root, 100);
    bst.displayInorder(root);
    cout<<endl;
    bst.displayPostorder(root);
    cout<<endl;
    bst.displayPreorder(root);
    cout<<endl;
    cout<<bst.findMax(root)->data;
    cout<<endl;
    cout<<"Height: "<<bst.calHeight(root);
    cout<<endl;
    cout<<bst.search(root,120);
    cout<<endl;
    root=bst.deleteNode(root,40);
    cout<<endl;
    bst.displayInorder(root);
}