//
//  Count nodes of linked list.cpp
//  C++ DSA 
//
//  Created by Shashi Kant on 06/07/23.
//


Node *temp=head;
int cnt=0;
while(temp!=NULL){
    temp=temp->next;
    cnt++;
}
return cnt;
}
