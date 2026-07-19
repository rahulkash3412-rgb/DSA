class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int cnt=0;
        for(int j=1;j<nums.size();j++){
           for(int i=0;i<j;i++)
           { if(nums[i]+nums[j]<target)
            cnt++;}
        }
        return cnt;
    }
};