#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
  int data;
  Node *next;

  Node(int d)
  {
    this->data = d;
    this->next = NULL;
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
void insertNode(int d, Node *&tail)
{
  if (tail == NULL)
  {
    Node *newNode = new Node(d);
    tail = newNode;
    newNode->next = newNode;
  }
  else
  {
    Node *temp = tail;
    Node *newNode = new Node(d);
    newNode->next = temp->next;
    temp->next = newNode;
    tail = newNode;
  }
}
void insertAtPosition(int d,Node* tail,int val)
{
  Node* temp = tail;
  Node* newNode = new Node(d);
  while(temp->data != val)
  {
    temp = temp->next;
  }
  newNode->next = temp->next;
  temp->next = newNode;
}
void deleteNode(int val,Node* &tail)
{
  Node* previous = tail;
  Node* curr = tail->next;
  while(curr->data != val)
  {
    previous = curr;
    curr = curr->next;
  }
  previous->next = curr->next;
  if(curr == previous)
  {
    tail = NULL;
  }
  else if(tail == curr)
  {
    tail = previous;
  }
  curr->next = NULL;
  delete curr;

}
void print(Node *&tail)
{
  Node *temp = tail;
  if(tail == NULL)
  {
    cout<<"linded list is empty"<<endl;
  }
  do
  {
    cout << tail->data << " ";
    tail = tail->next;
  } while (temp != tail);
  cout << endl;
}

int main()
{

  Node *tail = NULL;
  insertNode(7, tail);
  // print(tail);
  // insertNode(5, tail);
  // print(tail);
  // insertNode(4, tail);
  // print(tail);
  // insertNode(3, tail);
  // print(tail);
  // insertNode(2, tail);
  // print(tail);
  // insertNode(1, tail);
  // print(tail);
  // insertAtPosition(9,tail,7);
  // print(tail);
  deleteNode(7,tail);
  print(tail);
}