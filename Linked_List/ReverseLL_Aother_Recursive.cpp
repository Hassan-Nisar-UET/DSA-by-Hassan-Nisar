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

void insertAtTail(Node* &Tail,int d)
{
    Node* temp = new Node(d);
    Tail -> next = temp;
    Tail = temp;
}
void InsertAtMiddle(Node* & head , int position , int d)
{
    Node* temp = head;
    int count = 1;
    while(count < position - 1)
    {
        temp = temp -> next;
        count++;
    }
    Node* NewNode = new Node(d);
    NewNode -> next = temp -> next;
    temp -> next = NewNode;
}
Node* ReverseRecur(Node* &head)
{
    if(head == NULL || head->next == NULL)
    {
        return head;
    }
    Node* chotaHead = ReverseRecur(head->next);
    head->next->next = head;
    head->next = NULL;
    return chotaHead;

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
    Node* Tail = node1;

    print(head);

    insertAtTail(Tail,  12);

    print(head);

    insertAtTail(Tail,  13);

    print(head);

    InsertAtMiddle(head , 3 , 15);

    print(head);

    Node* R = ReverseRecur(head);

    print(R);

}