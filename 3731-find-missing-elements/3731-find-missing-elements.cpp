class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<bool>present(101,false);
        vector<int>ans;
        int small = nums[0];
        int big = nums[0];
      for(int i=0;i<nums.size();i++){
        present[nums[i]]=true;
          if(small>nums[i])
          {
            small = nums[i];
          }
          if(big<nums[i]){
            big =nums[i];
          }
      }
      for(int i= small;i<=big;++i){
        if(!(present[i])){
            ans.push_back(i);
        }
      }
        return ans;
    }
};