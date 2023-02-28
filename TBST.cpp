#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    bool lbit, rbit;

    Node(int data)
    {
        this->data = data;
        left = right = NULL;
        rbit = lbit = 1;
    }
};
class TBST
{
public:
    Node *dummy;
    Node *root;
    TBST()
    {
        dummy = new Node(-1);
        dummy->rbit = 0;
        dummy->lbit = 1;
        dummy->left = dummy;
        dummy->right = dummy;
    }
    void insert(int data)
    {
        if (dummy->lbit == 1)
        {
            root = new Node(data);
            root->left = dummy;
            root->lbit = 1;
            root->right = dummy;
            root->rbit = 1;
            dummy->left = root;
            dummy->lbit = 0;
            return;
        }
        else
        {
            Node *temp = root;
            while (1)
            {
                if (data < temp->data)
                {
                    if (temp->lbit == 1)
                    {
                        Node *newNode = new Node(data);
                        newNode->left = temp->left;
                        newNode->lbit = 1;
                        newNode->right = temp;
                        newNode->rbit = 1;
                        temp->left = newNode;
                        temp->lbit = 0;
                        return;
                    }
                    else
                        temp = temp->left;
                }
                if(data>temp->data){
                    if(temp->rbit==1){
                        Node* newNode = new Node(data);
                        newNode->right=temp->right;
                        newNode->rbit=1;
                        newNode->left=temp;
                        newNode->lbit=1;
                        temp->right=newNode;
                        temp->rbit=0;
                        return;
                    }
                    else
                        temp=temp->right;
                }
            }
        }
    }
    Node* inorderSuccessor(Node* current){
        if(current->rbit==1)
            return current->right;
        else
            current=current->right;
        while (current->lbit==0){
            current=current->left;
        }
        return current;
        
    }
    void inorder(){
        Node* current = root;
        while (current->lbit==0)
            current=current->left;
        while (current!=dummy){
            cout<<current->data<<" ";
            current=inorderSuccessor(current);
        }
        
        
    }
};
int main()
{
    TBST tbst;
    tbst.insert(5);
    tbst.insert(3);
    tbst.insert(7);
    tbst.insert(8);
    tbst.insert(9);
    tbst.insert(11);
    tbst.insert(4);
    tbst.insert(2);
    tbst.insert(6);
    tbst.inorder();
}