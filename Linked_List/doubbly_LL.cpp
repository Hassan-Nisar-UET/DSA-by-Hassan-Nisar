#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *priv;
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->priv = NULL;
    }
    ~Node()
    {
        int val = this->data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "memory free from node with value.." << val << endl;
    }
};
void deleteNode(int value, Node *&head, Node *&tail)
{
    Node *temp = head;
    while (temp->data != value)
    {
        temp = temp->next;
    }
    if (temp->priv == NULL)
    {
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else if (temp->next == NULL)
    {
        tail = temp->priv->next;
        temp->priv->next = NULL;
        temp->priv = NULL;
        delete temp;
    }
    else
    {
        temp->priv->next = temp->next;
        temp->next->priv = temp->priv;
    }
}
void insertNode(int d, Node *&head, Node *&tail)
{
    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        head = newNode;
    }
    else
    {

        Node *temp = tail;
        Node *newNode = new Node(d);
        newNode->priv = temp;
        temp->next = newNode;
        tail = newNode;
    }
}
void insertAtPosition(int value, int d, Node *&head, Node *&tail)
{
    Node *temp = head;
    Node *newNode = new Node(d);
    while (temp->data != value)
    {
        temp = temp->next;
    }
    if (temp->next == NULL)
    {
        insertNode(7, head, tail);
    }
    else
    {
        newNode->next = temp->next;
        temp->next->priv = newNode->next;
        temp->next = newNode;
        newNode->priv = temp;
    }
}
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    // Node *node1 = new Node(5);
    Node *head = NULL;
    Node *tail = NULL;
    // print(head);
    insertNode(4, head, tail);
    print(head);
    insertNode(3, head, tail);
    print(head);
    insertNode(2, head, tail);
    print(head);
    insertNode(1, head, tail);
    print(head);
    insertAtPosition(1, 7, head, tail);
    print(head);
    deleteNode(7, head, tail);
    print(head);
}