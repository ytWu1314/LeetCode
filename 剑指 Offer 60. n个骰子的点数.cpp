class Solution {
public:
    vector<double> dicesProbability(int n) {
        vector<vector<double>> dp(n+1,vector<double>(6*n+1));
        for(int i=1;i<=6;i++) dp[1][i]=1;

        for(int i=1;i<=n;i++)
        {
            for(int j=i;j<=6*i;j++)
            {
                for(int k=1;k<=6;k++)
                {
                    if(j>=k)
                    {
                        dp[i][j]+=dp[i-1][j-k];
                    }
                }
            }
        }
        vector<double> res(5*n+1);
        for(int i=0;i<=5*n;i++)
        res[i]=dp[n][n+i] / pow(6,n);
        return res;
    }
};