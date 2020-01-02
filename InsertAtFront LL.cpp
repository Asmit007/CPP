#include<iostream>
using namespace std ;

class node
{
public :

    int data ;
    node *next ;

    //Parameterized Constructor , which will be called as soon as the object is created
    node(int i)
    {
        data= i ;
        next=NULL ;
    }
} ;

void InsertAtFront(node *&head, int data)
 {
     node *n= new node(data) ;        //Dynamic Object is Made instead of Static Object
     n->next=head ;
     head=n ;
 }

void Print(node *head)
{
    while(head)
    {
        cout<<head->data<<" -> "  ;
        head=head->next ;
    }
}

int main()
{
  node *head = NULL ;

  InsertAtFront(head,1) ;
  InsertAtFront(head,2);
  InsertAtFront(head,3);
  InsertAtFront(head,4);
  InsertAtFront(head,5);
  InsertAtFront(head,6);
Print(head) ;
  return 0 ;
}

