class Solution {
public:
    int findNthDigit(long long n) {
        if(n<=9) return n;
        long long x=9;
        long long temp=1;
        long long res=9;
        long long restemp;
        long long cnt=1; 
        while(n>res)
        {
            temp*=10;
            cnt++;
            restemp=res;
            res+=x*temp*cnt;
        }
        long long num=(n-restemp+cnt-1)/cnt+temp-1;
        long long r=(n-restemp) %cnt?((n-restemp) %cnt):cnt;
        return to_string(num)[r-1]-'0';
    }
};