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
    }
};

void InsertAtEnd(node* &head, node* &tail , int data)
{
    if(head==NULL)
    {
        node* obj = new node(data) ;
        head=obj ;
        obj->next=head ;
        return ;
    }

    node* obj=new node(data) ;
    node* temp=head;
    while(temp->next!=head)
    {
        temp=temp->next ;
    }
    temp->next=obj ;
    tail=obj ;
    obj->next=head ;
    return ;
}
void PrintCLL(node* head)
{
    node*temp=head ;
  while(temp->next!=head)
    {
        cout<<temp->data<<" -> " ;
        temp=temp->next ;
    }
    cout<<temp->data<<" -> " ;
    cout<<endl;
}
int main()
{
    node* tail=NULL ;
    node* head=NULL ;
    InsertAtEnd(head,tail,1) ;
    InsertAtEnd(head,tail,2) ;
    InsertAtEnd(head,tail,3) ;
    InsertAtEnd(head,tail,4) ;
    InsertAtEnd(head,tail,5) ;
    PrintCLL(head) ;
    return 0 ;
}
