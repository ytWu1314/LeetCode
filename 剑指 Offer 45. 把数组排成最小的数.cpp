class Solution {
public:
    static bool cmp(string a,string b)
    {
        return a+b<b+a;
    }
    string minNumber(vector<int>& nums) {
        vector<string> str;
        for(int i=0;i<nums.size();i++)
        str.push_back(to_string(nums[i]));
        sort(str.begin(),str.end(),cmp);
        string ans;
        for(int i=0;i<str.size();i++)
        ans+=str[i];
        return ans;
    }
};