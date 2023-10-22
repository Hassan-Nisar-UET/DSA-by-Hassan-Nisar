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
};
void FindLoop(Node *&tail)
{
  bool flag = false;
  Node *slow = tail;
  Node *fast = tail;
  if (slow->next == NULL)
  {
    cout << "there is no loop in this linked list" << endl;
    return;
  }

  slow = slow->next;
  fast = fast->next;
  if (fast->next == NULL)
  {
    cout << "there is no loop in this linked list" << endl;
    return;
  }
  else
  {
    fast = fast->next;
  }
  while (fast->next != NULL || slow->next != NULL)
  {
    if (slow->data == fast->data)
    {
      flag = true;
      cout << "there is loop in this linked list" << endl;
      break;
    }else
    {
      slow = slow ->next;
      fast = fast->next->next;
    }
  }
  if (flag == false)
  {
    cout << "there is no loop in this linked list" << endl;
    return;
  }
}
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


void print(Node *&tail)
{
  Node *temp = tail;
  if (tail == NULL)
  {
    cout << "linded list is empty" << endl;
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
  print(tail);
  insertNode(5, tail);
  print(tail);
  insertNode(4, tail);
  print(tail);
  insertNode(3, tail);
  print(tail);
  insertNode(2, tail);
  print(tail);
  insertNode(1, tail);
  print(tail);
  FindLoop(tail);
}