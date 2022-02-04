class Solution {
public:
    long long countDigitOne(long long n) {
        if(!n) return 0;
        long long res=0;
        vector<int> nums;
        while(n) nums.push_back(n%10),n/=10;
        for(int i=nums.size()-1;i>=0;i--)
        {
            int left=0,right=0,t=1;
            for(int j=nums.size()-1;j>i;j--)
            left=left*10+nums[j];
            
            for(int j=i-1;j>=0;j--) 
            right=right*10+nums[j],t*=10;
            res+=left*t;
            if(nums[i]==1) res+=right+1;
            else if(nums[i]>1) res+=t;
        }
        return res;
    }
};