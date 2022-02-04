class Solution {
public:        
    string res="";
    string ans="";
    string reverseWords(string s) {
        if(s.empty()) return s;
        

        int Start,End;

        for(int i=0;i<s.size();i++)
        if(s[i]!=' ')
        {
            Start=i;
            break;
        } 
        for(int i=s.size()-1;i>=0;i--)
        if(s[i]!=' ')
        {
            End=i;
            break;
        }
        for(int i=Start;i<=End;i++)
        res+=s[i];

        int i=res.size()-1;
        int j=res.size()-1;

        while(i>=0)
        {
            string temp="";
            while(i>=0 && res[i]!=' ')
            { 
                i--;
            }
            for(int k=i+1;k<=j;k++)
            temp+=res[k];
            while(i>=0 && res[i]==' ') i--;
            j=i;
            ans+=temp+" ";
        }
        return ans.substr(0,ans.size()-1);
    }
};