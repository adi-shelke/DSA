#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    bool lbit,rbit;

    Node(int data)
    {
        this->data=data;
        left=right=NULL;
        rbit=lbit=1;
    }
};
class TBST{
    public:
    Node* dummy;
    Node* root;
    TBST(){
        dummy=new Node(-1);
        dummy->rbit=1;
        dummy->lbit=0;
        dummy->left=dummy;
        dummy->right=dummy;
    }
    void insert(int data)
    {
        if(dummy->lbit=1)
        {
            root=new Node(data);
            root->left=dummy->left;
            root->lbit=dummy->lbit;
            root->right=dummy->right;
            root->rbit=1;
            root->lbit=0;
            dummy->left=root;
            return;
        }
        else
        {
            if(data<root->data)
            {
                
            }
        }
    }
};
int main()
{
    TBST tbst;
}