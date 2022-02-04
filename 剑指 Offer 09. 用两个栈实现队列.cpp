class CQueue {
public:        
    stack<int> s1;
    stack<int> s2;

    CQueue() {
    }
    
    void appendTail(int value) {
        s1.push(value);
    }
    
    int deleteHead() {
        if(s1.empty()&&s2.empty()) return -1;
        else 
        {
            if(s2.empty())
            {
                while(s1.size())
                {
                    s2.push(s1.top());
                    s1.pop();
                }
            }
            int t=s2.top();
            s2.pop();
            return t;
        }
    }
};

/**
 * Your CQueue object will be instantiated and called as such:
 * CQueue* obj = new CQueue();
 * obj->appendTail(value);
 * int param_2 = obj->deleteHead();
 */