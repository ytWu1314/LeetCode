class Solution {
public:
    int numWays(int n) {
        int inf=1e9+7;
        if(n==0) return 1;
        int a=0;
        int b=1;
        int c;
        for(int i=1;i<=n;i++)
        {
            c=(a+b)%inf;
            a=b;
            b=c;
        } 
        return c;
    }
};