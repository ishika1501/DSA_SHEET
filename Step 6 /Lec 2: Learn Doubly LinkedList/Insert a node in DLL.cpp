void addNode(Node *head, int pos, int data)
{
  
    Node* node = new Node(data);
    Node* curr =head;
    
    for(int i=0 ;i<pos; i++){
        curr=curr->next;
    }
    
    if(curr->next==NULL){
        curr->next=node;
        node->prev=curr;
    }else{
        node->next=curr->next;
        node->prev=curr;
        curr->next->prev=node;
        curr->next=node;
    }
}