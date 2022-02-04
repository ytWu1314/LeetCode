class Solution {
public:
    long long res;
    long long reversePairs(vector<int>& nums) {
        vector<int> temp(nums.size()+1);
        return merge_sort(0,nums.size()-1,nums,temp);
    }
    long long merge_sort(int l,int r,vector<int> &q,vector<int> &temp)
    {
        if(l>=r) return 0;
        int mid=(l+r)>>1;
        res=merge_sort(l,mid,q,temp)+merge_sort(mid+1,r,q,temp);
        int i=l,j=mid+1;
        int k=0;
        while(i<=mid && j<=r)
        {
            if(q[i]<=q[j])
            {
                temp[k++]=q[i++];
            }
            else {
                temp[k++]=q[j++];
                res+=mid-i+1;
            }
        }
        while(i<=mid) temp[k++]=q[i++];
        while(j<=r) temp[k++]=q[j++];
        for(i=l,j=0;i<=r;i++,j++)
        q[i]=temp[j];
        return res;
    }
};