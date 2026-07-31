class Solution {
public:
    string firstPalindrome(vector<string>& words) {
      
        for(auto word : words){
              int l=0,r=word.size()-1;
              bool flag = true;

           while(l<r){
            if(word[l]!=word[r]){
                flag = false;
                break;
            }
            l++;r--;
           }
           if(flag) return word;
        }
        return "";
    }
};