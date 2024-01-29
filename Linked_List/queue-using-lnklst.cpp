#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
struct node
{
    int data;
    node *next;
};
class lnklst
{
private:
    node *head;
    node *tail;

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
        if (head == NULL && tail == NULL)
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
    void deleteNode()
    {
        node *del;
        del = head;
        head = head->next;
        delete del;
    }
    void display()
    {
        node *var;
        var = head;
        while(var != NULL)
        {
            cout<<"value is...."<<var->data<<endl;
            var = var->next;
        }
    }
};

int main()
{
    lnklst obj;
    obj.creatNode(8);
    obj.creatNode(83);
    obj.creatNode(89);
    obj.creatNode(78);
    obj.creatNode(85);
    obj.display();
    cout<<"******************"<<endl;
    obj.deleteNode();
    obj.deleteNode();
    obj.display();

}