vector<int> Solution::prevSmaller(vector<int> &A) {
    int n=A.size();
    stack<int>st;
    vector<int>leftsmaller(n);
    
    for(int i=0 ;i<n ;i++){
        while(!st.empty() && st.top()>=A[i])st.pop();
        if(st.empty())leftsmaller[i]=-1;
        else leftsmaller[i]=st.top();
        st.push(A[i]);
    }
    return leftsmaller;
}
