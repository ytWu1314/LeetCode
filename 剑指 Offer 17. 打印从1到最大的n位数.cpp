class Solution {
public:
    vector<int> printNumbers(int n) {
        vector<int> ans;
        int a=9;
        int sum=0;
        while(n--)
        {
            sum=sum*10+a;
        }
        for(int i=1;i<=sum;i++)
        ans.push_back(i);
        return ans;
    }
};