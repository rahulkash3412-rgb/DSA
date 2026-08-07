class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
     int count_less = 0;
        int count_equal = 0;

        for (int num : nums) {
            if (num < target) count_less++;
            else if (num == target) count_equal++;
        }

        vector<int> ans;
        for (int i = 0; i < count_equal; i++) {
            ans.push_back(count_less + i);
        }

        return ans;
    }
};