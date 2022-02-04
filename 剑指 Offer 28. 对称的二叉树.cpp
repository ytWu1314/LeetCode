/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool dfs(TreeNode *left,TreeNode *right)
    {
        if(left==NULL || right==NULL)
        {
            return !left && !right;
        }
        if(left->val!=right->val) return false;
        return dfs(left->right,right->left) &&dfs(left->left,right->right);
    }
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        return dfs(root->left,root->right);
    }
};