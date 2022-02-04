class Solution {
public:
    bool isStraight(vector<int>& nums) {
        int temp[5];
        int cnt=0;
        sort(nums.begin(),nums.end());
        bool flag=true;
        for(int i=0;i<nums.size();i++)
        if(nums[i]!=0)
        temp[cnt++]=nums[i];
        for(int i=0;i<cnt-1;i++)
        {
            if(temp[i]==temp[i+1])
            {
                flag=false;
                break;
            }
        }
        if(!flag) return false;
        if(temp[cnt-1]-temp[0]<=4) return true;
        return false;
    }
};