class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
        vector<int> ans;
        if(a.empty()) return ans;
        unordered_set<int> mp;
        for(int i=0;i<a.size();i++)
        {
            if(mp.count(target-a[i]))
            {
                ans.push_back(target-a[i]);
                ans.push_back(a[i]);
                break;
            }
            mp.insert(a[i]);
        }
        return ans;
    }
};