#include<iostream>
using namespace std ;

class node
{
public :
    int data ;
    node* prev ;
    node* next ;

    node(int i)
    {
        data=i ;
        prev=NULL ;
        next=NULL;
    }
};

void InsertAtFront(node* &head , node* &tail , int data)
{
    if(head==NULL)
    {
        node* obj=new node(data) ;
        head=obj ;
        tail=head ;
        return ;
    }

    node* obj =new node(data) ;
     obj->next=head ;
    head->prev=obj ;
    head=obj ;
    return ;
}

void InsertAtPosition(node* &head, int Position , int data)
{
    int x=1 ;
    node* temp=head;
    while(x<Position-1)
    {
        temp=temp->next ;
        x++ ;
    }
   node* temp2=temp->next ;
    node* obj = new node(data) ;
    obj->next=temp2 ;
    temp2->prev=obj ;
    obj->prev=temp ;
    temp->next=obj ;

    return ;
}

void Print(node* head)
{
    while(head)
    {
        cout<<head->data<<" -> " ;
        head=head->next ;
    }
    cout<<endl ;
}

void PrintBackward(node* tail)
{
    while(tail)
    {
        cout<<tail->data<<" -> " ;
        tail=tail->prev ;
    }
    cout<<endl;
}



int main()
{
    node* head=NULL ;
    node* tail=NULL ;

    InsertAtFront(head,tail,1) ;
    InsertAtFront(head,tail,3) ;
    InsertAtFront(head,tail,5) ;
    InsertAtFront(head,tail,6) ;
    Print(head) ;
    InsertAtPosition(head,4,2) ;
    Print(head) ;
    InsertAtPosition(head,3,4) ;
    Print(head) ;
    PrintBackward(tail) ;

    return 0 ;
}

