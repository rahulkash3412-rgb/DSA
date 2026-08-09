class Solution {
public:
    int searchInsert(vector<int>& nums, int k) {
        int end = nums.size() -1;
        int start = 0;
        while(start <= end){
            int mid = start+(end - start)/2;
            if(nums[mid] == k)
            return mid;

            if(nums[mid] > k ){
               end = mid -1;
            }
            else {
                  start = mid+1;
            }
        }
        return start;
    }
};