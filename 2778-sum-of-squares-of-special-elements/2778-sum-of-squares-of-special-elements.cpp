class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n = nums.size();
        long sum =0;
        for(int i =1;i<=n;i++){
            if(n%i==0){
                long a = nums[i-1]*nums[i-1];
                sum += a; 
            }
        }
        return sum;
    }
};