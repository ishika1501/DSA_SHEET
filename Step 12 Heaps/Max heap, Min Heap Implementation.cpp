vector<int> minHeap(int n, vector<vector<int>>& q) {
    // Write your code here.
    vector<int>ans;
    priority_queue <int, vector<int>,greater<int>>p;
    for(int i=0 ;i<n ;i++){
        if(q[i][0]==0){
            p.push(q[i][1]);
        }else{
            int val=p.top();
            ans.push_back(val);
            p.pop();
        }
    }
    return ans;
}