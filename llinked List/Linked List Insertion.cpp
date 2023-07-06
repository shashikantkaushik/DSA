//
//  Linked List Insertion.cpp
//  C++ DSA 
//
//  Created by Shashi Kant on 06/07/23.
//

Node *insertAtBegining(Node *head, int x) {
               Node *temp=head;
               Node *prev=NULL;
               Node *newNode=new Node(x);
               newNode->next=head;
               head=newNode;
               return head;
  }
  
  
  //Function to insert a node at the end of the linked list.
  Node *insertAtEnd(Node *head, int x)  {
    Node *temp=head;
    Node *newNode =new Node(x);
      if(head==NULL){
         head = newNode;
         return head;
     }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->next=NULL;
    return head;
  }
