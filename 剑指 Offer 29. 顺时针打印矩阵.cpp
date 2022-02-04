class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        if(matrix.empty()) return ans;
        int n=matrix.size(),m=matrix[0].size();
        vector<vector<bool>> st(n,vector<bool>(m,false));

        int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};
        int x=0,y=0,d=0;

        for(int i=0;i<n*m;i++)
        {
            ans.push_back(matrix[x][y]);
            st[x][y]=true;

            int a=x+dx[d],b=y+dy[d];
            if(a>=n ||a<0 ||b>=m||b<0 || st[a][b]) 
            {
                d=(d+1)%4;
                a=x+dx[d],b=y+dy[d];
            }
            x=a,y=b;
        }
        return ans;
    }
};