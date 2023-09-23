#include <bits/stdc++.h>
using namespace std;

class Node 
{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this -> data = data;
        this -> next = NULL;
    }
};

void insertAtHead(Node* &head,int d)
{
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void print(Node* &head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main()
{   
    // created a new node
    Node* node1 = new Node(10);

    // head pointed to node1
    Node* head = node1;

    print(head);

    insertAtHead(head,  12);

    print(head);

    insertAtHead(head,  13);

    print(head);

}
