class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int s=0,res=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(s<0) s=0;
            s+=nums[i];

            res=max(res,s);
        }
        return res;
    }
};