class Solution {
public:
    bool dfs(vector<vector<char>> & board,string & word,int u,int x,int y)
    { 
        if(word[u]!=board[x][y]) return false;
        if(u==word.size()-1) return true;
        int dx[4]={-1,0,1,0},dy[4]={0,-1,0,1};
        char t=board[x][y];
        board[x][y]='*';
        for(int i=0;i<4;i++)
        {
            int a=x+dx[i],b=y+dy[i];
            if (a < 0 || a >= board.size() || b < 0 || b >= board[0].size() || board[a][b] == '*') continue;
                if (dfs(board,word,u+1,a,b)) return true;
        }
        board[x][y]=t;
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[i].size();j++)
            {
                if(dfs(board,word,0,i,j)) return true;
            }
        }
        return false;
    }
};