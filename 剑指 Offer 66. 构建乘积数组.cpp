class Solution {
public:
    vector<int> constructArr(vector<int>& a) {
        vector<int> b;
        if(a.empty()) return b;
        int n=a.size();
        b.resize(n);
        int p=1;
        for(int i=0;i<n;i++)
        {
            b[i]=p;
            p*=a[i];
        }
        p=1;
        for(int i=n-1;i>=0;i--)
        {
            b[i]*=p;
            p*=a[i];
        }
        return b;
    }
};