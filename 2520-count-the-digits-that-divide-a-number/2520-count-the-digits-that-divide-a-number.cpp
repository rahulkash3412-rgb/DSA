class Solution {
public:
    int countDigits(int num) {
        int count=0;
        int val=num;
        while(val){
            int n=val%10;
         if( num%n==0){
            count++;
         }
         val/=10;
        }
        return count;
    }
};