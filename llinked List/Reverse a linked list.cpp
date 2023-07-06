//
//  Reverse a linked list.cpp
//  C++ DSA 
//
//  Created by Shashi Kant on 06/07/23.
//

//Function to reverse a linked list.
  struct Node* reverseList(struct Node *head)
  {
    Node* prev = NULL;
      Node* curr = head;
      while(curr){
          
         head = head->next;
          curr->next = prev;
          prev = curr;
          curr = head;
          
      }
    return prev;
  }
