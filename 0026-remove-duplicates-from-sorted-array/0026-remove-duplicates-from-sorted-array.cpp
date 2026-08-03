class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;

        int idx = 1; // Start from index 1 since the first element is always unique
        
        for (int i = 1; i < nums.size(); i++) {
            // If we find a new unique element
            if (nums[i] != nums[i - 1]) {
                nums[idx] = nums[i]; // Move it to the front
                idx++;               // Increment unique count
            }
        }
        
        return idx; // Returns the number of unique elements
    }
};