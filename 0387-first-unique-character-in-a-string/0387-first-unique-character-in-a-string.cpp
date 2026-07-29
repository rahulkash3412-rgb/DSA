class Solution {
public:
    int firstUniqChar(string s) {
       for(int i=0;i<s.length();i++){
        bool k=false;
        for(int j=0;j<s.size();j++){
            if(s[i] == s[j]&& i != j){
               k=true;
               break;
            }}
            if(!k){
            return i;}
            

       } 
       return -1;
    }
}; 