class Solution {
  public:
    vector <int> bottomView(Node *root) {
        vector<int>ans;
        if(root==NULL)return ans;
        map<int,int>m;
        queue<pair<Node*,int>>q;
        q.push({root,0});
        while(!q.empty()){
            Node*temp=q.front().first;
            int p=q.front().second;
            q.pop();
            m[p]=temp->data;
            if(temp->left)q.push({temp->left, p-1});
            if(temp->right)q.push({temp->right, p+1});
        }
        for(auto &i:m)ans.push_back(i.second);
        return ans;
    }
};