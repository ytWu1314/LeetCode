class Solution {
public:
    int missingNumber(vector<int>& nums) {
        if(nums.empty()) return 0;
        int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            if(cnt!=nums[i])
            {
                break;
            }
            cnt++;
        }
        return cnt;
    }
};