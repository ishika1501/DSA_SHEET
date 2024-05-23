class Solution
{
    public:
    Node* reverseDLL(Node * head)
    {
        //Your code here
        if(head==NULL || head->next==NULL){
            return head;
        }
        
        Node* prevv=NULL;
        Node* curr=head;
        while(curr!=NULL){
            prevv=curr->prev;
            curr->prev=curr->next;
            curr->next=prevv;
            curr=curr->prev;
        }
        return prevv->prev;
    }
};