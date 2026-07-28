class Solution {
public:
    long long sumAndMultiply(int n) {
        long long x=0;
        long long sum=0;
        int p=1;
        while(n){
            int d = n%10;
         sum += d;
         if(d!=0){
           x = d*p+x;
           p*= 10; 
         }
         n /= 10;
       }
       return x*sum;
    }
};