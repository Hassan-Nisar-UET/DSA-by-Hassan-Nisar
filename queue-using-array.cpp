#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
bool isEmpty();
bool isFull();
void enQueue();
void deQueue();
void display();
int manue();
int queue[5];
int front = -1;
int rear = -1;
int main()
{
   int option = 0;
   
   while(option != 4)
   {
       option = manue();
       system("cls");
       if(option == 1)
       {
            enQueue();
       }
       else if(option == 2)
       {
            deQueue();
            cout<<"daata sucessfully delete"<<endl;
            cout<<"press any key to countinue"<<endl;
            getch();
       }
       else if(option == 3)
       {
           display();
           cout<<"press any key to countinue"<<endl;
           getch();
           system("cls");
       }
   }
}
int manue()
{   
    int option = 0;
    cout<<"1.enter the value in queue"<<endl;
    cout<<"2.delete the value from queue"<<endl;
    cout<<"3.view the data"<<endl;
    cout<<"enter your option"<<endl;
    cin>>option;
    return option;
}
void enQueue()
{
    int value = 0;
    cout<<"enter the value in queue"<<endl;
    cin>>value;
    if(isFull())
    {
        cout<<"this is overflow condition"<<endl;
    }
    else if(rear == -1 && front == -1)
    {
        front++;
        rear++;
        queue[rear] = value;
    }
    else
    {
        rear++;
        queue[rear] = value;
    }

}
void deQueue()
{
    if(isEmpty())
    {
        cout<<"this is under flow condition"<<endl;
    }
    else if(rear == 0 && front == 0 )
    {
        rear = -1;
        front = -1;
    }
    else
    {
        queue[front] = 0;
        front++;
        cout<<"sucessfully delete"<<endl;
    }
}
void display()
{
    for(int i = front; i <= rear; i++)
    {
        cout<<"value...."<<queue[i]<<endl;
    }
}
bool isFull()
{
    if(front >= 0 && rear == 4)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool isEmpty()
{
    if(front == -1 && rear == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}