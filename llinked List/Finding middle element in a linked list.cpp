//
//  Finding middle element in a linked list.cpp
//  C++ DSA 
//
//  Created by Shashi Kant on 06/07/23.
//

int getMiddle(Node *head)
 {
     // Your code here.
      Node *slow = head;
      Node *fast = head;
      
      while(fast != NULL && fast->next != NULL){
          slow = slow->next;
          fast = fast->next->next;
      }
      
      return slow->data;
 }
