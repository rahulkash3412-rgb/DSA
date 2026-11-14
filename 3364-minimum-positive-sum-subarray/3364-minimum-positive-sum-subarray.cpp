class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n =nums.size();
        int minsum = INT_MAX;
        if(l>r)return -1;
        for(int i=0 ; i<n;i++){
            int sum = 0;
            for(int j=i;j<n;j++){
                sum += nums[j];
                int len = j-i+1;
                if(len >= l && len <= r){
                    if(sum > 0){
                    minsum = min(minsum,sum);
                    }
                }
                if(len>r) break;
            }
        }
           return (minsum == INT_MAX)?-1:minsum; 
    }
};