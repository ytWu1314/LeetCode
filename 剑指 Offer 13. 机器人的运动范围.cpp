class Solution {
public:
    int ans;
    bool check(int x,int y,int k)
    {
        int sum=0;
        while(x)
        {
            sum+=x%10;
            x/=10;
        }
        while(y)
        {
            sum+=y%10;
            y/=10;
        }
        return sum<=k;
    }
    void bfs(int n,int m,int k)
    {
        int dx[4]={-1,0,1,0},dy[4]={0,1,0,-1};
        queue<pair<int,int>> q;
        vector<vector<bool>> st(n,vector<bool>(m,false));
        q.push({0,0});
        while(q.size())
        {
            auto t=q.front();
            q.pop();
            int x=t.first,y=t.second;
            
            if(st[x][y] || !check(x,y,k)) continue;
            ans++;
            st[x][y]=true;
            
            for(int i=0;i<4;i++)
            {
                int a=x+dx[i],b=y+dy[i];
                if(a>=0 && a<n && b>=0 && b<m )
                q.push({a,b});
            }
        }
    }
    int movingCount(int m, int n, int k) {
        bfs(n,m,k);
        return ans;
    }
};