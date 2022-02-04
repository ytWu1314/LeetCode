class Solution {
public:
    vector<vector<int>> findContinuousSequence(int target) {
        vector<vector<int>> ans;
        int temps=1;
        for(int i=1,j=1;i<=target;i++)
        {
            while(temps<target) temps+=++j;
            if(temps==target && j>i)
            {
                vector<int> res;
                for(int k=i;k<=j;k++)
                {
                    res.push_back(k);
                }
                ans.push_back(res);
            }
            temps-=i;
        }
        return ans;
    }
};