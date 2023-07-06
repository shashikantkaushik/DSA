//
//  Search in Linked List.cpp
//  C++ DSA 
//
//  Created by Shashi Kant on 06/07/23.
//

bool searchKey(int n, struct Node* head, int key) {
    Node *temp=head;
    bool t=true;
    bool f=false;
   for(int i=0;i<n;i++){
       if(temp->data==key){
         return t;
       }
       temp=temp->next;
   }
   return f;
}
