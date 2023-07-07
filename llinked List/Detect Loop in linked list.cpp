//
//  Detect Loop in linked list.cpp
//  C++ DSA 
//
//  Created by Shashi Kant on 07/07/23.
//

{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        if(head==NULL){
            return false;
        }
        map <Node *,bool> visited;
        Node *temp=head;
        while(temp!=NULL){
            if(visited[temp]==true){
                return 1;
            }
            visited[temp]=true;
            temp=temp->next;
        }
        return 0;
    }
};
