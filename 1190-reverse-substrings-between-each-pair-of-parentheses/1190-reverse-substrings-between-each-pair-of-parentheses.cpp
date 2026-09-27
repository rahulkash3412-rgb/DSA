class Solution {
public:
    string reverseParentheses(string s) {
        int n = s.length();
        stack<int>open;
        vector<int>nxt(n);
        for(int i =0 ; i<n ; i++){
            if(s[i] == '('){
                open.push(i);
            }
            else if (s[i]==')'){
                int j=open.top();
                open.pop();
                nxt[j]=i;
                nxt[i]=j;
            }
        }
           string res;
           int flag = 1;
           for(int i=0;i<n;i+=flag){
            if(s[i]=='('||s[i]==')'){
                i= nxt[i];
                flag=-flag;
            }
            else{
                res.push_back(s[i]);
            }
           }
          return res;
    }
};