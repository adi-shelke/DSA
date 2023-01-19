#include <iostream>
using namespace std;

struct Node
{
  int val;
  Node *next;
};

class MyStack
{
  public:
  Node *head;
  int stacksize;

public:
  MyStack()
  {
    head = NULL;
    stacksize = 0;
  }
  void push(int a)
  {
    Node *temp = new Node();
    temp->val = a;
    temp->next = head;
    head = temp;

    cout << "element pushed to stack" << endl;
  }

  void pop()
  {
    if (head == NULL)
    {
      cout << "Stack is empty can not pop element" << endl;
    }
    Node *temp = head;
    head = temp->next;
    temp->next = NULL;
    delete temp;
    cout << "Element popped from stack" << endl;
  }

  void display()
  {
    Node *ptr;
    ptr = head;
    cout << "Stack elements are: ";
    while (ptr != NULL)
    {
      cout << ptr->val << " ";
      ptr = ptr->next;
    }
    cout << endl;
  }
  int top()
  {
    return head->val;
  }
};

// int main()
// {
//   Stack s1;
//   s1.push(5);
//   s1.push(4);
//   s1.push(2);
//   s1.push(3);
//   s1.pop();
//   s1.display();
// }