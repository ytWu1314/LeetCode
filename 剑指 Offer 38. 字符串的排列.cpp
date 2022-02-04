class Solution {
public:
    vector<string> ans;
    bool st[10];
    void dfs(int u,string &s,string &res)
    {
        if(u==s.size())
        {
            ans.push_back(res);
            return ;
        }
        for(int i=0;i<s.size();i++)
        {
            if(st[i] || (i > 0 && !st[i - 1] && s[i - 1] == s[i]))
            continue;

            st[i]=true;
            res.push_back(s[i]);
            dfs(u+1,s,res);
            st[i]=false;
            res.pop_back();
        }
    }
    vector<string> permutation(string s) {
        if(s.empty()) return ans;
        sort(s.begin(),s.end());
        string res;
        dfs(0,s,res);
        return ans;
    }
};