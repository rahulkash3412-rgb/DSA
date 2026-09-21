class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        int j= nums.size()-1;
        double minavg = INT_MAX;
        while(i<j){
            double currentavg = (nums[i]+nums[j])/2.0;
            if(currentavg < minavg){
                minavg = currentavg;
            }
            i++;
            j--;
        }
        return minavg;
    }
};