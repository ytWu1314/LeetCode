class Solution {
public:
    unordered_map<long long,int> cnt;
    int singleNumber(vector<int>& nums) {
        for(auto a:nums)
        {
            cnt[a]++;
        }
        for(auto m:cnt)
        {
            if(m.second==1) return m.first; 
        }
        return 0;
    }
};