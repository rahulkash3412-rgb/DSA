class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
    int n = nums.size();
        std::unordered_map<int, int> count;
        for (int num : nums) {
            count[num]++;
        }
        if (k == 1) {
            int ans = -1;
            for (auto& [num, freq] : count) {
                if (freq == 1) {
                    ans = std::max(ans, num);
                }
            }
            return ans;
        }

        if (k == n) {
            int ans = -1;
            for (int num : nums) {
                ans = std::max(ans, num);
            }
            return ans;
        }
        int ans = -1;
        if (count[nums[0]] == 1) {
            ans = std::max(ans, nums[0]);
        }
        if (count[nums[n - 1]] == 1) {
            ans = std::max(ans, nums[n - 1]);
        }

        return ans;
    }
};