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
    Node* searchAndReturnPointer(int key, Node* root)
    {
        if(root==NULL)
            return NULL;
        else if(root->data==key)
            return root;
        else if(key<root->data)
            search(key, root->left);
        else
            search(key,root->right);
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
    Node* findMin(Node* root)
    {
        if(root==NULL)
            return root;
        while (root->left!=NULL)
            root=root->left;
        // cout<<"Min Node: "<<temp->data<<endl;    //add this to print the data
        return root;
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
    Node* deleteNode(int data, Node* root)
    {
        if(root==NULL)
            return root;
        else if(data<root->data)
            root->left=deleteNode(data,root->left);
        else if(data>root->data)
            root->right=deleteNode(data,root->right);
        else
        {
            if(root->left == NULL && root->right == NULL)
            {
                delete root;
                root=NULL;
            }
            else if(root->left == NULL)
            {
                Node* temp=root;
                root=root->right;
                delete temp;
            }
            else if(root->right == NULL)
            {
                Node* temp=root;
                root=root->left;
                delete temp;
            }
            else
            {
                Node* temp=findMin(root->right);
                root->data=temp->data;
                root->right=deleteNode(temp->data,root->right);
            }
        }
        return root;
    }
    int calCulateHeight(Node* root)
    {
        if(root==NULL)
         return -1;
        return max(calCulateHeight(root->left),calCulateHeight(root->right))+1;
    }
    int calculateDepth(Node* root)
    {
        if(root==NULL)
            return -1;
        int ldepth=calculateDepth(root->left);
        int rdepth=calculateDepth(root->right);
        return max(ldepth,rdepth)+1;
    } 
    Node* getInorderSuccessor(Node* root, int data)
    {
        // Node* current = searchAndReturnPointer(data,root);
        Node* current;
        Node* root1=root;
        if(root==NULL)
            return NULL;
        else
        {
            while (root->data!=data)
            {
                if(data<root->data)
                    root=root->left;
                else
                    root=root->right;
            }
        }
        current=root;
        
        if(current==NULL)
            return NULL;
        if(current->right!=NULL)
            return findMin(current->right);
        else
        {
            Node* successor = NULL;
            Node* ancestor = root1;
           while (ancestor!=current)
           {
            if(current->data<ancestor->data)
            {
                successor=ancestor;
                ancestor=ancestor->left;
            }
            else
                ancestor=ancestor->right;
           }
           return successor;
            
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
    cout<<"Inorder traversal:"<<endl;
    bst.displayInorder(root);
    cout<<endl<<endl;
    cout<<"Preorder traversal:"<<endl;
    bst.displayPreorder(root);
    cout<<endl<<endl;
    cout<<"Postorder traversal:"<<endl;
    bst.displayPostorder(root);
    cout<<endl<<endl;
    cout<<"Search result of 10 is: "<<bst.search(10,root);
    cout<<endl<<endl;
    cout<<"Breadth First traversal:"<<endl;
    bst.breadthFirstTraversal(root);
    cout<<endl<<endl;
    cout<<"The min Node is: "<<bst.findMin(root)->data<<endl;
    cout<<endl;
    bst.findMax(root);
    cout<<endl;
    cout<<"Before deletion, the breadth first traversal is:"<<endl;
    bst.breadthFirstTraversal(root);
    cout<<endl;
    cout<<endl;
    root=bst.deleteNode(20,root);
    cout<<"After deletion, the breadth first traversal is:"<<endl;
    bst.breadthFirstTraversal(root);
    cout<<endl<<endl;
    cout<<"Height of BST is: "<<bst.calCulateHeight(root)<<endl;
    cout<<endl;
    cout<<"Depth of BSTis: "<<bst.calculateDepth(root)<<endl;
    cout<<endl;
    Node* successor=bst.getInorderSuccessor(root,10);
    cout<<"Successor is: "<<successor->data;
}