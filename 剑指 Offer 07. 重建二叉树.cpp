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
    unordered_map<int,int> mp;
    TreeNode* dfs(vector<int>& preorder, vector<int> & inorder ,int pl,int pr,int il,int ir)
    {
        if(pl>pr) return NULL;
        int k=mp[preorder[pl]]-il;
        TreeNode *root=new TreeNode(preorder[pl]);
        root->left=dfs(preorder,inorder,pl+1,pl+k,il,il+k-1);
        root->right=dfs(preorder,inorder,pl+k+1,pr,il+k+1,ir);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n=inorder.size();
        for(int i=0;i<n;i++)
        mp[inorder[i]]=i;
        return dfs(preorder,inorder,0,n-1,0,n-1);
    }
};