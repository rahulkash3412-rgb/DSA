class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size() ;
        if(n==1) return 1;
        int minidx =0;
        int maxidx = 0;
        for(int k=0;k<n;k++){
            if(nums[k]<nums[minidx]) minidx = k;
            if(nums[k]>nums[maxidx]) maxidx = k;
        }
        int i = min(minidx,maxidx);
        int j = max(minidx,maxidx);

            return min({(i + 1) + (n - j), n - i, j + 1});
    }
};