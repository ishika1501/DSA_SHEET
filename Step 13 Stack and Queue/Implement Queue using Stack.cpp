class MyQueue {
public:
    stack<int>st1;
    stack<int>st2;

    MyQueue() {}
    
    void push(int x){
        s1.push(x);
    }
    
    int pop() {
        int pop = -1;
        if(!s2.empty()){
            pop=s2.top();
        }else{
            while(!s1.empty()){
                s2.push(s1.top());
                s1.top();
            }
            pop=s2.top();
        }
        s2.pop();
        return pop();
    }
    
    int peek() {
        int front = -1;
        if(!s2.empty()){ // If stack s2 isn't empty then, front is s2 ka top...
            front = s2.top();
        }
        else{
            while(!s1.empty()){
                s2.push(s1.top()); // Copy s1 into s2...
                s1.pop();
            }
            front = s2.top();
        }
        return front;
    }
    
    bool empty() {
        return s1.empty() && s2.empty();
    }
};