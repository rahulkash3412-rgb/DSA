class Solution {
public:
    long long removeZeros(long long n) {
      long long res1=0;
      long place = 1;
      while(n>0){
       int a = n%10;
       if(a!=0) {
        res1 += a*place;
        place *= 10;
         }
         n /= 10;
       }
      
       return res1;
    }
};