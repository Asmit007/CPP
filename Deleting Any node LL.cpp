#include<iostream>
using namespace std ;

class Node
{
public :
    int data ;
    Node* next ;

    Node(int i)
    {
        data=i ;
        next=NULL ;
    }
};

void InsertAtEnd(Node* &head, Node* &tail , int data )
{
    if(head==NULL)
    {
        Node* obj = new Node(data) ;
        head=obj ;
        tail=head;
        return ;
    }

    Node* obj = new Node(data) ;
    Node* temp=head ;
    while(temp->next)
    {
        temp=temp->next ;
    }
    temp->next=obj ;
    tail=obj ;

    return ;
}

void DeleteNode(Node* &head, int Point )
{
    if(head==NULL)
    {
        return ;
    }

    Node* temp=head ;
    int count=1 ;
    if(Point==1)
    {
        head=head->next ;
        delete temp ;
        return ;
    }

    while(count<Point-1)
    {
        temp=temp->next ;
        count++ ;
    }
    Node* X=temp->next;
    delete X ;
    temp->next=temp->next->next ;

}

void Print(Node* head)
{
    while(head)
    {
        cout<<head->data<<"-> " ;
        head=head->next ;
    }
    cout<<endl ;
    return ;
}

int main()
{
    Node* head=NULL ;
    Node* tail=NULL ;
    InsertAtEnd(head,tail,1) ;
    InsertAtEnd(head,tail,2) ;
    InsertAtEnd(head,tail,3) ;
    InsertAtEnd(head,tail,4) ;
    InsertAtEnd(head,tail,5) ;
    InsertAtEnd(head,tail,6) ;
    Print(head) ;
    DeleteNode(head,1);
     Print(head) ;
    DeleteNode(head,3) ;
    Print(head) ;
    return 0 ;
}
