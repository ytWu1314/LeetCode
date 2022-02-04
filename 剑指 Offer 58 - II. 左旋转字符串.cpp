class Solution {
public:
    string reverseLeftWords(string s, int n) {
        string temp="";
        string ans="";
        for(int i=0;i<n;i++)
        temp+=s[i];

        ans+=s.substr(n,s.size())+temp;
        return ans;
    }
};