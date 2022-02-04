class MedianFinder {
public:
    /** initialize your data structure here. */
    MedianFinder() {

    }
    priority_queue<int, vector<int>, greater<int>> min_heap;
    priority_queue<int> max_heap;
    void addNum(int num) {
        max_heap.push(num);
        while(min_heap.size() && max_heap.top() >min_heap.top())
        {
            auto tempmax=max_heap.top(),tempmin=min_heap.top();
            max_heap.pop();
            min_heap.pop();
            max_heap.push(tempmin);min_heap.push(tempmax);
        }
        if(max_heap.size()>min_heap.size()+1)
        {
            auto tempmax=max_heap.top();
            max_heap.pop();
            min_heap.push(tempmax);
        }
    }
    
    double findMedian() {
        if(min_heap.size() + max_heap.size() &1) return max_heap.top();
        return (min_heap.top() + max_heap.top())/2.0; 
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */