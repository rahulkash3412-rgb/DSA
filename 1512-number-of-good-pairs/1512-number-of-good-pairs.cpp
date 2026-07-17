class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int>pairs;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(pairs.find(nums[i])!=pairs.end()){
                cnt+=pairs[nums[i]];
            }
            pairs[nums[i]]=pairs[nums[i]]+1;
        }
        return cnt;
    }
};