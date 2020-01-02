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
void InsertAtFront(node*&head, node*&tail , int data)
{
    if(head==NULL)
    {  node* Obj = new node(data) ;
      head=Obj ;
      tail=head ;
    return ;
    }
    node *Obj = new node(data) ;
    Obj->next=head ;
    head=Obj ;
}

void Print(node* head)
{
    while(head)
    {
        cout<<head->data<<" -> " ;
        head=head->next ;
    }
}

int KthNode(node*head , int k)
{
    node* Fast=head;
    node* Slow=head ;
    int x=k ;
    while(x--)
    {
        Fast=Fast->next ;
    }
    while(Fast)
    {
        Fast=Fast->next ;
        Slow=Slow->next ;
    }

    return Slow->data ;
}



int main()
{ node *head=NULL ;
  node* tail=NULL ;

  InsertAtFront(head,tail,9);
  InsertAtFront(head,tail,8);
  InsertAtFront(head,tail,7);
  InsertAtFront(head,tail,6);
  InsertAtFront(head,tail,5);
  InsertAtFront(head,tail,4);
  InsertAtFront(head,tail,3);
  InsertAtFront(head,tail,2);
  InsertAtFront(head,tail,1);
  Print(head) ;
  int K ;
  cout<<"\n Enter K  = " ;
  cin>>K ;
  cout<<"Kth node from End = "<<KthNode(head,K)<<endl  ;

    return 0 ;
}
