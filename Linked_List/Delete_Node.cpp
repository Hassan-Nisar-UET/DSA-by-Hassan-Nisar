#include <bits/stdc++.h>
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
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "memory is free from data.." << value << endl;
    }
};
void DeleteNode(Node *&head, Node *&Tail, int d)
{
    Node *curr = head;

    if (curr->data == d)
    {
        head = curr->next;
        curr ->next = NULL;
        delete curr;
    }
    else
    {
        Node *priv = NULL;
        while (curr->data != d)
        {
            priv = curr;
            curr = curr->next;
        }
        if (curr->next == NULL)
        {
            priv->next = curr->next;
            priv = Tail;
            curr ->next = NULL;
            delete curr;
        }
        else
        {
            cout << priv->data << "....." << curr->data << endl;
            priv->next = curr->next;
            cout << priv->data << "....." << curr->data << endl;
            curr ->next = NULL;
            delete curr;
        }
    }
}
void insertAtTail(Node *&Tail, int d)
{
    Node *temp = new Node(d);
    Tail->next = temp;
    Tail = temp;
}
void InsertAtMiddle(Node *&head, int position, int d)
{
    Node *temp = head;
    int count = 1;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    Node *NewNode = new Node(d);
    NewNode->next = temp->next;
    temp->next = NewNode;
}

void print(Node *&head)
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
    // created a new node
    Node *node1 = new Node(10);

    // head pointed to node1
    Node *head = node1;
    Node *Tail = node1;

    print(head);

    insertAtTail(Tail, 12);

    print(head);

    insertAtTail(Tail, 13);

    print(head);

    InsertAtMiddle(head, 3, 15);

    print(head);

    DeleteNode(head, Tail, 15);

    print(head);
}