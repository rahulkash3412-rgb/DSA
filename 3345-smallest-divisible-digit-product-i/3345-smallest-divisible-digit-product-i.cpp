class Solution {
public:
int digit(int n ){
     int p=1;
        while(n>0){
           p = p*(n%10);
           n /= 10;
        }
        return p;
}
    int smallestNumber(int n, int t) {
      while(1){
        if(digit(n)%t == 0){
            return n;
        }
        n++;
      }       
       
    }
};