void func(Node* root, int level, vector<int>& res){
    if(root==NULL)return;
    if(res.size()==level){
        res.push_back(root->data);
    }
    func(root->left, level + 1, res);
    func(root->right, level + 1, res);
}
vector<int> leftView(Node *root){
   vector<int>ans;
   func(root, 0, ans);
   return ans;
   
}