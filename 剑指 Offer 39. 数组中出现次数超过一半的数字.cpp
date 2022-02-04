class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(auto m:mp)
        {
            if(m.second>n/2)
            {
                return m.first;
            }
        }
        return nums[0];
    }
};