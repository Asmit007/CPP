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


void DeleteAtFront(node* &head)
{

    node* temp = head ;
    head=head->next ;
    head->prev=NULL;
    delete temp ;

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
    DeleteAtFront(head) ;
    Print(head) ;
    PrintBackward(tail) ;

    return 0 ;
}

