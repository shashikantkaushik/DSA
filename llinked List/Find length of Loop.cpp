//
//  Find length of Loop.cpp
//  C++ DSA 
//
//  Created by Shashi Kant on 07/07/23.
//

Node*flyoid(Node* head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        return NULL;
    }
    
    Node*fast=head;
    Node*slow=head;
    while(slow!=NULL && fast!=NULL){
        slow=slow->next;
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        if(fast==slow){
            return slow;
        }
    }
    return NULL;
}

ddd
int countNodesinLoop(struct Node *head)
{
    // Code here
    int count=0;
    Node*start= getstart(head);
    if(start==NULL)
    return 0;
    
    Node*tmp=start;
    while(tmp->next!=start){
        tmp=tmp->next;
        count++;
    }
    return count+1;
}
