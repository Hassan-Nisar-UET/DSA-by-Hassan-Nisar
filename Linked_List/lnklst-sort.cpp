#include <iostream>
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
    void sort()
    {
        node *f, *s;
        int var=0;
        f = head;
        while (f->next != NULL)
        {
            s = f->next;
            while (s != NULL)
            {
                if (f->data > s->data)
                {

                    var = f->data;
                    f->data = s->data;
                    s->data = var;
                }
                s =s->next;
            }
            f = f->next;
        }
    }
    void display()
    {
        node *current;
        current = head;
        while (current != NULL)
        {
            cout << current->data<<endl;
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
    obj.sort();
    cout<<"************SORTED LINKED LIST*************"<<endl;
    obj.display();
}