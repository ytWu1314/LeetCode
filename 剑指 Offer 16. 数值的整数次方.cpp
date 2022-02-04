class Solution {
public:
    double quick(double x,long long n)
    {
        double res=1;
        while(n)
        {
            if(n&1)
            {
                res*=x;
            }
            n>>=1;
            x*=x;
        }
        return res;
    }
    double myPow(double x, long long n) {
        if(n<0)
        {
            double ans=quick(x,-n);
            return double(1/ans);
        }
        return quick(x,n);
    }
};