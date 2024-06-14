#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class SinglyLinkedList
{
public:
    Node *head;
    Node *tail;
    SinglyLinkedList()
    {
        head = NULL;
        tail = NULL;
    }

    void insertAtEnd(int data)
    {
        Node *temp = new Node(data);
        if (head == NULL)
            head = tail = temp;
        else
        {
            tail->next = temp;
            tail = temp;
        }
    }
    void insertAtEndAtStart(int data)
    {
        if (head == NULL)
            head = new Node(data);
        else
        {
            Node *tempNode = new Node(data);
            tempNode->next = head;
            head = tempNode;
        }
    }
    void insertAt(int position, int data)
    {
        if (position == 1)
            return insertAtEndAtStart(data);
        int i = 1;
        Node *temp = head;
        while (i < (position - 1))
        {
            temp = temp->next;
            if (temp == NULL)
            {
                cout << "Can't insert element due to Invalid Position" << endl;
                return;
            }
            i++;
        }
        if (temp->next == NULL)
        {
            insertAtEnd(data);
            return;
        }
        Node *nodeToInsert = new Node(data);
        nodeToInsert->next = temp->next;
        temp->next = nodeToInsert;
    }
    void showList()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
    void deleteNodeAt(int position)
    {
        Node *temp = head;
        if (position == 1)
        {
            head = temp->next;
            delete temp;
        }
        else
        {
            int i = 1;
            while (i < (position - 1))
            {
                temp = temp->next;
                i++;
            }
            Node *nodeToDelete = temp->next;
            if (temp->next->next != NULL)
            {
                temp->next = temp->next->next;
                nodeToDelete->next = NULL;
                delete nodeToDelete;
            }
            // deleting last element
            else
            {
                temp->next = NULL;
                nodeToDelete->next = NULL;
                delete nodeToDelete;
                tail = temp; // updating the tail value
            }
        }
    }
};

int main()
{
    SinglyLinkedList sll;
    sll.insertAtEnd(10);
    sll.insertAtEnd(20);
    sll.insertAtEnd(30);
    sll.insertAtEnd(50);
    sll.insertAtEndAtStart(1);
    sll.insertAt(5, 40);
    sll.insertAtEnd(60);
    sll.deleteNodeAt(1);
    sll.showList();
}