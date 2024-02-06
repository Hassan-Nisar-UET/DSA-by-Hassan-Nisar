#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
struct node
{
    int data;
    node *next;
};
class lnklst
{
private:
    node *head, *tail;

public:
    lnklst()
    {
        head = NULL;
        tail = NULL;
    }
    void creatNode(int value)
    {
        node *temp = new node;
        temp->data = value;
        temp->next = NULL;
        if (head == NULL)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
    }
    void reverse()
    {
        node *curr; 
        node *pre = NULL; 
        node *nex;
        curr = head;
        while (curr != NULL)
        {
            nex = curr->next;
            curr->next = pre;
            pre = curr;
            curr = nex;
            
        }
        head = pre;
    }
    void display()
    {
        node *current;
        current = head;
        while (current != NULL)
        {
            cout << current->data << endl;
            current = current->next;
        }
    }
};
int main()
{
    lnklst obj;
    obj.creatNode(38);
    obj.creatNode(54);
    obj.creatNode(83);
    obj.creatNode(3);
    obj.creatNode(5);
    obj.creatNode(8);
    obj.display();
    obj.reverse();
    cout<<"**************REVERSE LINKED LIST***********"<<endl;
    obj.display();
}