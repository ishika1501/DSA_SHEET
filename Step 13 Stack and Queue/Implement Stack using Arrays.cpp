class stack{
    private :
    int arr[1000];
    int top;

    public:
    stack(){
        top=-1;
    }
    int pop();
    void push(int x);
}
void stack::push(int x){
    top++;
    arr[top]=x;
}

int stack:: pop(){
    if(top!=-1){
        return arr[top--];
    }else return -1;
}

