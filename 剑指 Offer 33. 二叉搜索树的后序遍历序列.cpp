class Solution {
public:
    bool dfs(int l,int r,vector<int> &postorder)
    {
        if(l>=r) return true; //树空了
        int root=postorder[r];
        int k=r-1;
        while(k>=0 && postorder[k]>postorder[r]) k--;
        for(int i=l;i<=k;i++)
        if(postorder[i]>postorder[r]) return false;
        return dfs(l,k,postorder)&& dfs(k+1,r-1,postorder);
    }
    bool verifyPostorder(vector<int>& postorder) {
        return dfs(0,postorder.size()-1,postorder);
    }
};