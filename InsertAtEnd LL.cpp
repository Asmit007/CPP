#include<iostream>
using namespace std ;

class node
{ public:
    int data ;
    node* next ;

    node(int i)
    {
        data=i ;
        next=NULL ;
    }

};

void InsertAtEnd(node*& head , node*& tail , int data)
{
    if(head==NULL)
    {
        node *Obj = new node(data) ;
        head=Obj ;
        tail=head ;
    }
    else
    {  node* Obj = new node(data) ;
        tail->next=Obj ;
        tail=Obj ;
    }
}

void Print(node* head)
{
    while(head)
    {
        cout<<head->data<<" -> " ;
        head=head->next ;
    }
}
int main()
{ node *head=NULL ;
  node* tail=NULL ;

   InsertAtEnd(head,tail,6) ;
  InsertAtEnd(head,tail,7) ;
  InsertAtEnd(head,tail,8) ;
  InsertAtEnd(head,tail,9) ;
  InsertAtEnd(head,tail,10) ;


  Print(head) ;
    return 0 ;
}
