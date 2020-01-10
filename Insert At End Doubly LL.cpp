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

void InsertAtEnd(node* &head, node* &tail , int data)
{
    if(head==NULL)
    {
        node* obj=new node(data) ;
        head=obj ;
        tail=head ;
        return ;
    }

    node* obj = new node(data) ;
    tail->next=obj ;
    obj->prev=tail ;
    tail=obj ;
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
    InsertAtEnd(head,tail,1)  ;
    InsertAtEnd(head,tail,2)  ;
    InsertAtEnd(head,tail,3)  ;
    InsertAtEnd(head,tail,4)  ;
    Print(head) ;
    PrintBackward(tail) ;

    return 0 ;
}
