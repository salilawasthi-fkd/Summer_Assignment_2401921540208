class MyQueue {
private:
    stack<int> inStack;
    stack<int> outStack;

    void moveIfNeeded() {
        if (outStack.empty()) {
            while (!inStack.empty()) {
                outStack.push(inStack.top());
                inStack.pop();
            }
        }
    }

public:
    MyQueue() {}

    void push(int x) {
        inStack.push(x);
    }

    int pop() {
        moveIfNeeded();
        int front = outStack.top();
        outStack.pop();
        return front;
    }

    int peek() {
        moveIfNeeded();
        return outStack.top();
    }

    bool empty() {
        return inStack.empty() && outStack.empty();
    }
};