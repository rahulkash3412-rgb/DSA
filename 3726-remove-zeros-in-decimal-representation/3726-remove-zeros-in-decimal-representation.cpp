class Solution {
public:
    long long removeZeros(long long n) {
       string ans;
       string s =to_string(n);
       for(char c : s){
        if(c != '0')
          ans += c;
       }
        return stol(ans);
    }
};