class Solution {
public:
    int evalRPN(vector<string>& s) {
       int i = 0;
        stack<int> st;
        
        while (i < s.size()) {
            if (s[i] == "+" || s[i] == "-" || s[i] == "*" || s[i] == "/") {
                int secondNum = st.top();
                st.pop();
                int firstNum = st.top();
                st.pop();

                int result;
                if (s[i] == "+") {
                    result = firstNum + secondNum;
                } else if (s[i] == "-") {
                    result = firstNum - secondNum;
                } else if (s[i] == "/") {
                    result = firstNum / secondNum;
                } else if (s[i] == "*") {
                    result = firstNum * secondNum;
                }
                st.push(result);
            } else {
                st.push(stoi(s[i]));
            }
            i++;
        }
        
        return st.top();
    }
};