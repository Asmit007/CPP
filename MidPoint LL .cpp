#include<iostream>
using namespace std ;

class node
{
public :
    int data ;
    node* next ;

    node(int i)
    {
        data=i ;
        next=NULL ;
    }

};

void InsertAtEnd(node* &head , node* &tail ,int data)
{
   if(head==NULL)
   {
       node* obj = new node(data) ;
       head=obj ;
       tail=head ;
   }

   else
    {
    node* temp =head ;
  while(temp)
  {
      temp=temp->next ;
  }
    node* obj = new node(data) ;
   tail->next=obj ;
   tail=obj  ;
   }
}

void InsertAtFront(node* &head , int data)
{
        node* obj =new node(data) ;
        obj->next=head ;
        head=obj;
}

void Print(node* head)
{
    while(head)
    {
        cout<<head->data<<"->" ;
        head=head->next ;
    }
}

void Midpoint(node* head)
{
node* slow=head;
node* fast=head ;
while(fast->next && fast)
{
    slow=slow->next ;
    fast=fast->next->next;
}
cout<<endl<<"Midpoint = "<<slow->data ;
}

int main()
{
    node* head=NULL ;
    node* tail=NULL ;
    InsertAtEnd(head,tail,5) ;
    InsertAtEnd(head,tail,6) ;
    InsertAtEnd(head,tail,7) ;
    InsertAtFront(head,4) ;
    InsertAtFront(head,3) ;
    InsertAtFront(head,2) ;
    InsertAtFront(head,1) ;
    Print(head) ;
    Midpoint(head) ;
    return 0 ;
}
