class Solution {
public:
    int hammingWeight(uint32_t n) {
        unsigned int x=n;
        int ans=0;
        for(int i=0;i<32;i++)
        {
            if(x>>i&1)
            ans++;
        }
        return ans;
    }
};