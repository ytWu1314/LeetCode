class Solution {
public:
    int translateNum(long long num) {
        string x=to_string(num);
        int n=x.size();
        vector<int> f(n+1);
        f[0]=1;
        for(int i=1;i<=n;i++)
        {
            f[i]=f[i-1];
            if(i>1)
            {
                int t=(x[i-2]-'0')*10+x[i-1]-'0';
                if(t<=25 && t>=10)
                {
                    f[i]+=f[i-2];
                }
            }
        }
        return f[n];
    }
};