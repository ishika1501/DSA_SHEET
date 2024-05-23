BASIC IMPLEMENTATION 

class Node {
    public:
    
    int data;
    Node* next;

    Node(){
        data=0 ;
        next=NULL;
    }

    //parameterised constructor 
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

class Solution {
    public:
    Node* constructLL(vector<int>& arr){
        int n=arr.size();
        Node* node=new Node(arr[0]);
        Node* trav=node;
        
        for(int i=1 ;i<n ;i++){
            node->next=new Node(arr[i]);
            node=node->next;
        }
        return trav;
    } 
};