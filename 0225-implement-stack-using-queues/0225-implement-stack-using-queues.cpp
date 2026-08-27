class MyStack {
    queue<int>st ;
public:
    MyStack() {

    }
    
    void push(int x) {
        int s = st.size();
        st.push(x);
        for(int i=0;i<s;i++){
            st.push(st.front());
            st.pop();
        }
        
    }
    
    int pop() {
     int val = st.front();
     st.pop();
     return val;
    }
    
    int top() {
       return st.front();
    }
    
    bool empty() {
        return st.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */