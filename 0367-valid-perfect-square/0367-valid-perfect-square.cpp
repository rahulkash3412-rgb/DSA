class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num < 2)return true;
        int low=1;
        int high = num ;

        while(low<=high){
            long long mid = low + (high - low )/2 ;
            long long val = mid * mid ;
        
           if(val == num)return true;
           else if(val > num) high = mid - 1;
           else low = mid +1 ; 
}
return false ; 
    }
};