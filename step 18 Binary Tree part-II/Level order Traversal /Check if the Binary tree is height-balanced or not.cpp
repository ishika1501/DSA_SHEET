/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isvalid=true;
    int func(TreeNode * &root){
        if(root==NULL)return 0;
        int l=func(root->left);
        int r=func(root->right);
        if(abs(l-r)>1 && isvalid)isvalid=false;
        return max(l,r)+1;
    }
    bool isBalanced(TreeNode* root) {
        func(root);
        return isvalid;
    }
};