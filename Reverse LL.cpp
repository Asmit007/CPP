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

void Reverse(node* &head)
{
node* prev = NULL ;
node* current=head ;
node* Nxt ;

while(current)
{
    Nxt=current->next ;
    current->next=prev ;
    prev=current ;
    current=Nxt ;
}
head=prev ;
}


void Print(node* head)
{
    cout<<endl ;
    while(head)
    {
        cout<<head->data<<"->" ;
        head=head->next ;
    }
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
    Reverse(head);
    Print(head) ;
    return 0 ;
}
