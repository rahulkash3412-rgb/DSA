class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        int f=(n*(n+1))/2;
        for(int i=0;i<nums.size();i++){
            ans+=nums[i];
        }
        return f-ans;
    }
};