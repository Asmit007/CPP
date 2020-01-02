#include<iostream>
using namespace std ;

class node
{
public:
    int data ;
    node *next ;

    node(int i)
    {
        data=i ;
        next=NULL ;
    }
};


void InsertAtFront(node*&head, node*&tail , int data)
{
    if(head==NULL)
    {  node *Obj = new node(data) ;
       head=Obj ;
       tail=head;
    }
    else
    {
        node* Obj = new node(data) ;
        Obj->next=head ;
        head=Obj ;
    }
}


void InsertAtMid(node*&head, int data , int pos)
{
    int x=1 ;
    node* temp=head ;
    while(x<pos)
    {
        temp=temp->next ;
        x++ ;
    }

    node *Obj = new node(data) ;
    Obj->next=temp->next ;
    temp->next=Obj ;
}





void Print(node*head)
{
    while(head)
    {
        cout<<head->data<<" -> "  ;
        head=head->next ;
    }

}

int main()
{     node*head=NULL ;
       node*tail=NULL ;

    InsertAtFront(head,tail,5) ;
    InsertAtFront(head,tail,4) ;
    InsertAtFront(head,tail,2) ;
    InsertAtFront(head,tail,1) ;

    InsertAtMid(head,3,2) ;

    Print(head) ;
    return 0 ;
}
