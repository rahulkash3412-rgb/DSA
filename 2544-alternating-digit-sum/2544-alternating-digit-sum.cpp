class Solution {
public:
    int alternateDigitSum(int n) {
        int sum1=0,sum2=0;
        int cnt=0;
        while(n){
          if(cnt%2==0){
            sum1+=n%10;
          }
          else{
            sum2+=n%10;
          }
            cnt++;
            n/=10;
        }
        if(cnt%2==0)
        return (sum2-sum1);

        return sum1-sum2;
    }
};