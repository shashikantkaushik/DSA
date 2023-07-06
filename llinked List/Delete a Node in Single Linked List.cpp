//
//  Delete a Node in Single Linked List.cpp
//  C++ DSA 
//
//  Created by Shashi Kant on 06/07/23.
//

*You are required to complete below method*/
Node* deleteNode(Node *head,int x)
{
   Node *temp=head;

   int count=1;
        if(x==1 && head!=NULL)
        {
            head=head->next;
            return head;
        }
   while(count!=x-1){
       temp=temp->next;
       count++;
   }
 Node *q=temp->next;
   temp->next=q->next;
   return head;
   
}

