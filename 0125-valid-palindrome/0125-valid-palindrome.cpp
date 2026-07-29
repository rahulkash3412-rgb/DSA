class Solution {
public:
    bool isPalindrome(string s) {
        string p ="";
      for(char c : s){
        if (isalnum(c))
         p+=tolower(c);
      }
      s=p;
        reverse(s.begin(),s.end());
    
        return s == p;
    }
};