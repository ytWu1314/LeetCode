class Solution {
public:
    unordered_map<char,int> mp;
    char firstUniqChar(string s) {
        if(s.empty()) 
        {
            return ' ';
        }
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        for(int i=0;i<s.size();i++)
        {
            if(mp[s[i]]==1)
            {
                return s[i];
            }
        }
        return ' ';
    }
};