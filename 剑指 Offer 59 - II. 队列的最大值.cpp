class MaxQueue {
public:
    queue<int> q;
    deque<int> tempq;
    MaxQueue() {

    }
    
    int max_value() {
        if(tempq.empty()) return -1;
        return tempq.front();
    }
    
    void push_back(int value) {
        q.push(value);
        while(!tempq.empty() && tempq.back()<value) tempq.pop_back();
        tempq.push_back(value);
    }
    
    int pop_front() {
        if(q.empty()) return -1;
        int t=q.front();
        q.pop();
        if(t==tempq.front()) tempq.pop_front(); 
        return t;
    }
};

/**
 * Your MaxQueue object will be instantiated and called as such:
 * MaxQueue* obj = new MaxQueue();
 * int param_1 = obj->max_value();
 * obj->push_back(value);
 * int param_3 = obj->pop_front();
 */