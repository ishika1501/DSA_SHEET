
class Solution{
  public:
    //Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) {
       // Your code here
       if(head==NULL)return new Node(x);
       Node* temp = new Node(x);
       temp->next=head;
       return temp;
    }
    
    
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
       // Your code here
       if(head==NULL)return new Node(x);
       Node* temp = head;
       while(temp->next!=NULL){
           temp=temp->next;
       }
       Node* newNode = new Node(x);
       temp->next=newNode;
       return head;
    }
};