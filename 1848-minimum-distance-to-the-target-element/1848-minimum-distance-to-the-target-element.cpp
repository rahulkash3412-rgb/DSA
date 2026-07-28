class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
      
        int cnt = INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == target){
              cnt = min(cnt,abs(i-start));
            }
        }
        return cnt;
    }
};