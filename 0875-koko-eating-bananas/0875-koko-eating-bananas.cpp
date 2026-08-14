class Solution {
public:


long long fxn(vector<int>&arr , int hrs){
    long long t_hrs = 0;
    for(int i=0;i<arr.size();++i){
    t_hrs += (arr[i]+hrs-1)/hrs;
}
return t_hrs;
}


    int minEatingSpeed(vector<int>& arr, int h) {
        int big = *max_element(arr.begin(), arr.end());
        int ans = INT_MAX ;
    
    int low = 1;int high = big ; 
    while(low<=high){
        int mid = low+(high - low)/2 ;
        long long totalhrs = fxn(arr , mid) ; 
        if( totalhrs <= h){
            ans=mid ; 
            high = mid-1;
        }
        else low =mid + 1;

    }
    return ans;
    }
};