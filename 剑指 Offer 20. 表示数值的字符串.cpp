class Solution {
public:
    bool isNumber(string s) {
        int i=0,j=s.size()-1;
        while(i<=s.size()-1&&s[i]==' ' ) i++;
        while(j>=0 && s[j]==' ') j--;
        s[j+1]='\0';
        if(i>j) return false;

        bool isnum=false;
        if(s[i]=='+' || s[i]=='-') i++;
        while(s[i]>='0' && s[i]<='9') 
        {
            isnum=true;
            i++;
        }
        if(s[i]=='.') i++;
        while(s[i]>='0' && s[i]<='9') {
            isnum=true;
            i++;
        }
        if(isnum&& (s[i]=='e'|| s[i]=='E'))
        {
            i++;
            isnum=false;        
            if(s[i]=='+' || s[i]=='-') i++;
            while(s[i]>='0' && s[i]<='9')
            {
                i++;
                isnum=true;
            }
        }
        return (s[i]=='\0' && isnum);
    }
};