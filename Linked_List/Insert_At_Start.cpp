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
};

void insertAtTail(Node *&Tail, int d)
{
    Node *temp = new Node(d);
    Tail->next = temp;
    Tail = temp;
}
void InsertAtMiddle(Node *&head, Node *&Tail, int position, int d)
{
    Node *temp = head;
    if (position == 1)
    {
        Node *NewNode = new Node(d);
        NewNode->next = temp;
        head = NewNode;
    }
    else
    {
        int count = 1;
        while (count < position - 1)
        {
            temp = temp->next;
            count++;
        }
        if (temp->next == NULL)
        {
            insertAtTail(Tail, d);
        }
        else
        {
            Node *NewNode = new Node(d);
            NewNode->next = temp->next;
            temp->next = NewNode;
        }
    }
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

    InsertAtMiddle(head, Tail, 1, 15);

    print(head);

    InsertAtMiddle(head, Tail, 5, 5);

    print(head);
}