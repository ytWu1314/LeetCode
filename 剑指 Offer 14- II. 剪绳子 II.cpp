class Solution {
public:
    int cuttingRope(int n) {
        int inf=1e9+7;
        if(n<=3) return 1*(n-1);
        long long ans=1;
        if(n%3==1) {
            ans*=4;
            n-=4;
        }
        if(n%3==2)
        {
            ans*=2;
            n-=2;
        }
        while(n)
        {
            n-=3;
            ans=ans%inf*3;
        }
        return ans%inf;
    }
};