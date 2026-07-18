class Solution {
public:
    int findGCD(vector<int>& nums) {
        int small=INT_MAX;
        int large=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(small>nums[i])
            small=nums[i];
            if(large<nums[i])
            large=nums[i];
        }
        return gcd(small,large);
    }
};