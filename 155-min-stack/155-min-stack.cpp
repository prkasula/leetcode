class MinStack {

public:
    MinStack() {
        
    }
    
    void push(int val) {
        stack_.push(val);
        if(!minStack.empty()) {
         val = min(val , minStack.top());   
        }
        minStack.push(val);
        
    }
    
    void pop() {
        stack_.pop();
        minStack.pop();
    }
    
    int top() {
        return stack_.top();
    }
    
    int getMin() {
        return minStack.top();
    }
private:
    stack<int> stack_;
    stack<int> minStack;
    
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */