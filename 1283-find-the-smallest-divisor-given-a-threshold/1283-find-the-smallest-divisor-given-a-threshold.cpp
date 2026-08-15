class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        sort(nums.begin(),nums.end());
        int low = 1;
        int high = nums[nums.size()-1];
         
        while(low<=high){
            int mid = low+ ( high- low)/2 ;
            int sm=0;
    for(int i : nums){
        sm = sm + ceil((double)i/mid);}
            if(sm<= threshold){
                high =mid-1;
            }
            else low =mid+1 ; 
        }
        return low;
    }
};