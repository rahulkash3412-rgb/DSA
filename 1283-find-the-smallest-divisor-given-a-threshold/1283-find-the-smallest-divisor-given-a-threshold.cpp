class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
      int n = nums.size();

        int l = 1;
        int r = *max_element(nums.begin(),nums.end());

        int ans = r;

        while(l<=r){
            int mid = l+(r-l)/2; 

            int rslt = 0;
            for(int num:nums) rslt+=(num + mid - 1) / mid;

            if(rslt>threshold){
                l = mid+1;
            }
            else{
                ans = min(ans,mid);
                r = mid-1;
            }
        }

        return ans;
    }
};