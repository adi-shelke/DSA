#include<iostream>
using namespace std;
class Node{
    public:
    char ch;
    Node* left;
    Node* right;
    Node(char ch){
        this->ch=ch;
        this->left=NULL;
        this->right=NULL;
    }
};
class Stack{
    public:
    Node* st[35];
    int top=-1;
    void push(Node* nd)
    {
        st[++top]=nd;
    }
    Node* pop()
    {
        return (st[top--]);
    }
};
class Tree
{
    public:
    Stack expStack;
    Node* root;
    Tree(){
        root=NULL;
    }
    Node* createAdPush(char ch)
    {
        Node* temp= new Node(ch);
        expStack.push(temp);
        return root;
    }
    Node* popAndAttack(char ch)
    {
        root = new Node(ch);
        root->right=(expStack.pop());
        root->left=(expStack.pop());
        expStack.push(root);
        return root;
    }
    int display(Node* root)
    {
        if(root==NULL)
            return 1;
        else 
        {
            display(root->left);
            cout<<root->ch<<" ";
            display(root->right);
        }
    }
};
int main()
{
    Node* root;
    char exp[30];
    cout<<"Enter the expression"<<endl;
    cin>>exp;
    Tree t;
    int i=0;
    while (exp[i]!='\0')
    {
        if(isalnum(exp[i]))
        {
            root=t.createAdPush(exp[i]);
        }
        else
            root=t.popAndAttack(exp[i]);
        i++;
    }
    t.display(root);
}