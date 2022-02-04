class Solution {
public:
    int inf=1e9+7;
    int fib(int n) {
        int a=0;
        int b=1;
        int c;
        if(n==0) return 0;
        if(n==1) return 1;
        for(int i=1;i<n;i++)
        {
            c=(a+b)%inf;
            a=b;
            b=c;
        }
        return c;
    }
};