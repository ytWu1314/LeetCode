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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root) return ans;
        int cnt=1;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            vector<int> res;
            for(int i=q.size();i>0;i--)
            {
                auto t=q.front();
                q.pop();
                res.push_back(t->val);
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
            }
            if(cnt%2) ans.push_back(res);
            else{
                reverse(res.begin(),res.end());
                ans.push_back(res);
            }
            cnt++;
        }
        return ans;
    }
};