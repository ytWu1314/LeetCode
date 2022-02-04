class Solution {
public:
    int hh=0,tt=-1;
    vector<int> maxSlidingWindow(vector<int>& a, int k) {
        vector<int> ans;
        int n=a.size();
        int q[n+1];
        for(int i=0;i<a.size();i++)
        {
            if(hh<=tt && i-k+1>q[hh]) hh++;
            while(hh<=tt && a[i]>=a[q[tt]]) tt--;
            q[++tt]=i;
            if(i-k+1>=0) ans.push_back(a[q[hh]]);
        }
        return ans;
    }
};