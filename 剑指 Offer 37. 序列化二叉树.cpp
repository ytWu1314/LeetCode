/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:
    string path;
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        dfs_s(root);
        return path;
    }
    void dfs_s(TreeNode *root)
    {
        if(!root) 
        {
            path+="#,";
        }
        else {
            path+=to_string(root->val)+',';
            dfs_s(root->left);
            dfs_s(root->right);
        }
    }
    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        int u=0;
        return dfs_d(data,u);
    }
    TreeNode *dfs_d(string &data,int &u)
    {
        if(data[u]=='#')
        {
            u+=2;
            return NULL;
        }
        else 
        {
            int k=u;
            while(data[u]!=',') u++;
            TreeNode *root=new TreeNode(stoi(data.substr(k,u-k)));
            u++;
            root->left=dfs_d(data,u);
            root->right=dfs_d(data,u);
            return root;
        }
    }
};

// Your Codec object will be instantiated and called as such:
// Codec codec;
// codec.deserialize(codec.serialize(root));