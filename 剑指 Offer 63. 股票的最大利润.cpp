class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty()) return 0;
        int ans=0;
        int minv=prices[0];
        for(int i=1;i<prices.size();i++)
        {
            ans=max(ans,prices[i]-minv);
            minv=min(minv,prices[i]);
        }
        return ans;
    }
};