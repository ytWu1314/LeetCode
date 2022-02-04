class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() 
    {
    }
    int t=-1;
    int s[200010];
    int t2=-1;
    int ms[200010];

    void push(int x) {
        s[++t]=x;
        if(t2==-1 || ms[t2]>=x) ms[++t2]=x;
    }
    
    void pop() {
        if(s[t]==ms[t2]) t2--;
        t--;
    }
    
    int top() {
        return s[t];
    }
    
    int min() {
        return ms[t2];
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->min();
 */