class Solution {
public:
    int cuttingRope(int n) {
        if(n<=3) return 1*(n-1);
        int ans=1;
        if(n%3==1) 
        {
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
            ans*=3;
            n-=3;
        }
        return ans;
    }
};