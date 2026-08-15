class Solution {
public:
int sumofceil(vector<int>arr ,int div){
    int sm=0;
    for(int i=0;i<arr.size();i++){
        sm = sm + ceil((double)arr[i]/(double)div);
       
    }
    return sm ;
}

    int smallestDivisor(vector<int>& nums, int threshold) {
        sort(nums.begin(),nums.end());
        int low = 1;
        int high = nums[nums.size()-1];
            int ans=low; 
        while(low<=high){
            int mid = low+ ( high- low)/2 ;
            if(sumofceil(nums , mid) <= threshold){
                ans = mid ;
                high =mid-1;
            }
            else low =mid+1 ; 
        }
        return ans;
    }
};