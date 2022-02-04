class Solution {
public:
    stack<int> st;
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int i=0;
        for(int j=0;j<pushed.size();j++)
        {
            st.push(pushed[j]);
            while(st.size() && st.top()== popped[i])
            {
                st.pop();
                i++;
            }
        }
        return st.empty();
    }
};