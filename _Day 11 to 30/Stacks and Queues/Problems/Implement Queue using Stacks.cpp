class MyQueue {
public:
    stack<int>newest, oldest;
    MyQueue() {   
    }

    void push(int x) {
        newest.push(x);
    }
    
    void shiftstack(){
        if(oldest.empty())
            while(!newest.empty()){
                int val = newest.top();
                oldest.push(val);
                newest.pop();
            }
    }
    
    int pop() {
        shiftstack();
        int val = oldest.top();
        oldest.pop();
        return val;
    }
    
    int peek() {
        shiftstack();
        return oldest.top();
    }
    
    bool empty() {
        return newest.empty() && oldest.empty();
    }
};
