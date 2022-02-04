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
    vector<int> path;
    vector<vector<int>> ans;
    void dfs(TreeNode *root, int sum, int target)
    {
        if(!root) return ;
        path.push_back(root->val);
        sum+=root->val;
        if(!root->left && !root->right)
        {
            if(sum==target)
            ans.push_back(path);
        }
        else 
        {
            if(root->left) dfs(root->left,sum,target);
            if(root->right) dfs(root->right,sum,target);
        }
        path.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int target) {
        dfs(root,0,target);
        return ans;
    }
};