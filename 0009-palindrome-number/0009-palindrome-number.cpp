class Solution {
public:
    bool isPalindrome(int x) {
        int ori = x;
        if(x<0){
            return false;
        }
        long rev=0;
        int temp = 0;
        while(x!=0){
        temp=x%10;
        rev = (rev*10) + temp;
        x = x / 10;}
        if(ori == rev){
            return true;
        }
        else{
            return false;
        }
    }
};