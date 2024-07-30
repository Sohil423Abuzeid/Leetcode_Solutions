class MyQueue {
public:
    stack<int> man,tem;
    MyQueue() {
    }
    
    void push(int x) {
        while(!man.empty())
        {
            tem.push(man.top());
            man.pop();
        }
        man.push(x);
        while(!tem.empty())
        {
            man.push(tem.top());
            tem.pop();
        }
    }
    
    int pop() {
        int a = man.top();
        man.pop();
        return a;
    }
    
    int peek() {
        return man.top();
    }
    
    bool empty() {
        return man.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */