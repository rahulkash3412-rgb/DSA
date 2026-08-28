class Solution {
public:
    int evalRPN(vector<string>& s) {
        int i=0;
        stack<int>st;
        int ans;
        while(i<s.size()){
            if(s[i] == "+"||s[i] == "-"||s[i] == "*"||s[i] == "/"){
                int op1 = st.top();
                st.pop();
                int op2 = st.top();
                st.pop();
               switch (s[i][0]){
                case '+' :
                     st.push(op1 + op2);
                     break;
               
               case '-':  st.push(op2 - op1);
                     break;

                case '*':  st.push(op1 * op2);
                     break;      

                  case '/':  st.push(op2 / op1);
                     break;    
               
               }

            }
            else{
                        st.push(stoi(s[i]));
            }
            i++;
        }
        return st.top();
    }
};