class Solution
{
    public:
    Node* deleteNode(Node *head, int x)
    {
      //Your code here
      Node* temp=head;
      int count=0;
      
      if(x==1){
          head=head->next;
          delete(temp);
          return head;
      }
      
      for(int i = 1; i<x ; i++)
      {
          temp = temp->next;
      }
      
      if(temp->next == NULL)
      {
          temp->prev->next = NULL;
          temp->prev = NULL;
          delete(temp);
          return head;
      }
      
      temp->prev->next=temp->next;
      temp->next->prev=temp->next;
      delete(temp);
      return head;
      
    }
};