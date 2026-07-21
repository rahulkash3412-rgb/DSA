class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int tsum = 0;
        for(auto it : nums){
            tsum += it;
        }
        int lsum = 0;
        for(int i=0;i<nums.size();i++){
            if( lsum == tsum - lsum - nums[i])
            return i;

            lsum +=nums[i];
        }
        return -1;
    }
};