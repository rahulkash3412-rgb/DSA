class Solution {
public:
    int minimumDistance(vector<int>& nums) {
       int minm = INT_MAX;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    if(nums[i]==nums[j]&&nums[j]==nums[k]) {
                        minm = min(minm, (2*(k-i)));
                    }
                }
            }
        }
        return (minm ==INT_MAX)?-1:minm;
    }
};