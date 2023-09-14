// we need to keep track of the order in which minimums were pushed as if pop() occurs on a min, we need to provide the previous min
class MinStack {
private:
    stack<int> main;
    stack<int> minis;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        main.push(val);
        if(minis.empty() || val <= getMin())// <= is important. < wont work(might get popped)
            minis.push(val);
    }
    
    void pop() {
        if(!minis.empty() && main.top() == getMin())
            minis.pop();
        main.pop();
    }
    
    int top() {
        return main.top();
    }
    
    int getMin() {
        return minis.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */