class Solution {
public:
    vector<int> singleNumbers(vector<int>& nums) {
        int sum=0;
        for(auto a:nums)
        sum^=a;
        int k=0;
        while(!(sum>>k&1)) k++;
        int X=0;
        for(auto a:nums)
        {
            if(a>>k&1)
            X^=a;
        } 
        return {X,sum^X};
    }
};