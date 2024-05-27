vector<int> Solution::solve(vector<int> &A, vector<int> &B, int C) {
    sort(A.begin(), A.end(), greater<int>());
    sort(B.begin(), B.end(), greater<int>());
    
    priority_queue<int, vector<int>, greater<int>> pq;
    
    int N = A.size();
    for(int i=0; i<C; i++){
        pq.push(A[i] + B[i]);
    }
    
    vector<int> ans(C);
    
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(i==j)
            continue;
            if(A[i] + B[j] > pq.top()){
                pq.pop();
                pq.push(A[i] + B[j]);
            }
            else
            break;
        }
    }
    for(int i=C-1; i>=0; i--)
    {
        ans[i] = pq.top();
        pq.pop();
    }
    return ans;
}
