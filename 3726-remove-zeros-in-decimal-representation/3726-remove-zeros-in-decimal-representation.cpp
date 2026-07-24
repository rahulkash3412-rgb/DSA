class Solution {
public:
    long long removeZeros(long long n) {
      long long res1=0;
      long ans=0;
      while(n>0){
       int a = n%10;
       if(a!=0) res1 = res1*10 +a;
       n /= 10;
       }
       while(res1>0){
          ans = ans*10 +(res1%10);
          res1 /= 10;
       }
       return ans;
    }
};