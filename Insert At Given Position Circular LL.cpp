#include<iostream>
using namespace std ;

class node
{
public :
    int data;
    node* next ;

    node(int i)
    {
        data=i ;
    }
};

void InsertAtFront(node* &head , int data)
{
    if(head==NULL)
    {
        node* obj = new node(data) ;
        head=obj ;
        obj->next=head ;
        return ;
    }
    node* obj = new node(data) ;
    node* temp=head ;
    while(temp->next!=head)
    {
        temp=temp->next ;
    }
    temp->next=obj ;
    obj->next=head ;
    head=obj ;
    return ;
}

void InsertAtPosition(node* head , int Position , int data)
{
    node* temp=head ;
    int x=1 ;
    while(x<Position-1)
    {
        temp=temp->next ;
        x++ ;
    }
    node* temp2=temp->next ;
    node* obj = new node(data) ;
    temp->next=obj ;
    obj->next=temp2 ;
    return ;
}

void PrintCLL(node* head)
{
    node* temp=head ;
   while(temp->next!=head)
    {
        cout<<temp->data<<" -> " ;
        temp=temp->next ;
    }
    cout<<temp->data<<" -> " ;
    cout<<endl ;
}

int main()
{
    node* head=NULL ;
    node* tail=NULL ;
    InsertAtFront(head,1);
    InsertAtFront(head,2);
    InsertAtFront(head,3);
    InsertAtFront(head,4);
    InsertAtFront(head,5);
    PrintCLL(head) ;
   InsertAtPosition(head,3,7) ;
     PrintCLL(head) ;
   InsertAtPosition(head,2,8) ;
     PrintCLL(head) ;
   InsertAtPosition(head,5,9) ;
     PrintCLL(head) ;


    return 0 ;
}
