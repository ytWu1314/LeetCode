class Solution {
public:
    int lastRemaining(int n, int m) {
        list<int> l;
        for(int i=0;i<=n-1;i++)
        l.push_back(i);

        auto it=l.begin();
        int k=m-1;

        while(l.size()>1)
        {
            while(k--)
            {
                it++;
                if(it==l.end()) it=l.begin();
            }
            it=l.erase(it);
            if(it==l.end()) it=l.begin();
            k=m-1;
        }
        return l.front();
    }
};