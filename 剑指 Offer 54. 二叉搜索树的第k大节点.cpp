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
    vector<int> ans;
    void dfs(TreeNode *root)
    {
        if(!root) return ;
        dfs(root->left);
        ans.push_back(root->val);
        dfs(root->right);
    }
    int kthLargest(TreeNode* root, int k) {
        dfs(root);
        return ans[ans.size()-k];
    }
};