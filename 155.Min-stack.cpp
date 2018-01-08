class MinStack {
public:
    /** initialize your data structure here. */
    stack <int> normStack;
    stack <int> minStack;
    
    void push(int x) {
        normStack.push(x);
        if(minStack.empty()) minStack.push(x);
        else if(minStack.top() >= x) minStack.push(x);
    }
    
    void pop() {
        if(normStack.top() == minStack.top()) minStack.pop();
        normStack.pop();
    }
    
    int top() {
        return normStack.top();
    }
    
    int getMin() {
        return minStack.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */