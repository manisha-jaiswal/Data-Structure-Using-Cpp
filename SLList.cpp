//program to implement Singly link list

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class Node
{
public:
    int info;
    Node* next;
};

class List:public Node
{

    Node *first,*last;
public:
    List()
    {
        first=NULL;
        last=NULL;
    }
    void create();
    void insert();
    void delet();
    void display();
    void search();
};

void List::create()
{
    Node *temp;
    temp=new Node;
    int n;
    cout<<"\n\tEnter an Element:\t";
    cin>>n;
    temp->info=n;
    temp->next=NULL;
    if(first==NULL)
    {
        first=temp;
        last=first;
    }

    else
    {
        last->next=temp;
        last=temp;
    }
}

void List::insert()
{
    Node *prev,*cur;
    prev=NULL;
    cur=first;
    int count=1,pos,ch,n;
    Node *temp=new Node;
    cout<<"\n\tEnter an Element:\t";
    cin>>n;
    temp->info=n;
    temp->next=NULL;
    cout<<"\n\tINSERT AS\n\t\t1 : FIRST NODE\n\t\t2 : LAST NODE\n\t\t3 : IN BETWEEN FIRST & LAST NODES";
    cout<<"\n\tEnter Your Choice:\t";
    cin>>ch;
    switch(ch)
    {
    case 1:
        temp->next=first;
        first=temp;
        break;
    case 2:
        last->next=temp;
        last=temp;
        break;
    case 3:
        cout<<"\n\tEnter the Position to Insert:\t";
        cin>>pos;
        while(count!=pos)
        {
            prev=cur;
            cur=cur->next;
            count++;
        }
        if(count==pos)
        {
            prev->next=temp;
            temp->next=cur;
        }
        else
            cout<<"\n\tNot Able to Insert";
        break;

    }
}
void List::delet()
{
    Node *prev=NULL,*cur=first;
    int count=1,pos,ch;
    cout<<"\n\tDELETE\n\t\t1 : FIRST NODE\n\t\t2 : LAST NODE\n\t\t3 : IN BETWEEN FIRST & LAST NODES";
    cout<<"\n\tEnter Your Choice:\t";
    cin>>ch;
    switch(ch)
    {
    case 1:
        if(first!=NULL)
        {
            cout<<"\n\tDeleted Element is "<<first->info;
            first=first->next;
        }
        else
            cout<<"\n\tNot Able to Delete";
        break;
    case 2:
        while(cur!=last)
        {
            prev=cur;
            cur=cur->next;
        }
        if(cur==last)
        {
            cout<<"\n\tDeleted Element is: "<<cur->info;
            prev->next=NULL;
            last=prev;
        }
        else
            cout<<"\n\tNot Able to Delete";
        break;
    case 3:
        cout<<"\n\tEnter the Position of Deletion:\t";
        cin>>pos;
        while(count!=pos)
        {
            prev=cur;
            cur=cur->next;
            count++;
        }
        if(count==pos)
        {
            cout<<"\n\tDeleted Element is: "<<cur->info;
            prev->next=cur->next;
        }
        else
            cout<<"\n\tNot Able to Delete";
        break;
    }
}
void List::display()
{
    Node *temp=first;
    if(temp==NULL)
    {
        cout<<"\n\tList is Empty";
    }
    while(temp!=NULL)
    {
        cout<<"\t"<<temp->info;
        cout<<" --> ";
        temp=temp->next;
    }
    cout<<" NULL";
}
void List::search()
{
    int value,pos=0;
    bool flag=false;
    if(first==NULL)
    {
        cout<<"\tList is Empty";
        return;
    }
    cout<<"\tEnter the Value to be Searched:";
    cin>>value;
    Node *temp;
    temp=first;
    while(temp!=NULL)
    {
        pos++;
        if(temp->info==value)
        {
            flag=true;
            cout<<"\tElement"<<value<<"is Found at "<<pos<<" Position";
            return;
        }
        temp=temp->next;
    }
    if(!flag)
    {
        cout<<"\tElement "<<value<<" not Found in the List";
    }
}
int main()
{
    List l;
    int ch;
    while(1)
    {
     //   system("cls");
cout<<"\n\t**** MENU ****\n";
        cout<<"\n\t\t1 : CREATE\n\t\t2 : INSERT\n\t\t3 : DELETE\n\t\t4 : SEARCH\n\t\t5 : DISPLAY\n\t\t6 : EXIT\n";
        cout<<"\n\tEnter Your Choice:\t";
        cin>>ch;
        switch(ch)
        {
        case 1:
            l.create();
            break;
        case 2:
            l.insert();
            break;
        case 3:
            l.delet();
            break;
        case 4:
            l.search();
            break;
        case 5:
            l.display();
            break;
        case 6:
            return 0;
        }
    }
    return 0;
}
