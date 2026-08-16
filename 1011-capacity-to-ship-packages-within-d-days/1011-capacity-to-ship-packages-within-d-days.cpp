class Solution {
    int fxn(vector<int>wt , int cap){
      int days = 1 ;
      int load = 0;
      for(int i=0;i<wt.size();i++){
         if(wt[i]+load > cap){
            days++;
            load = wt[i];
         }
         else load += wt[i] ; 
      }
      return days ; 
    }
public:
    int shipWithinDays(vector<int>& wt, int days) {
        int low = *max_element(wt.begin(),wt.end());
        int high = accumulate(wt.begin(),wt.end(),0) ; 
        while(low<=high){
            int mid = low + (high -low)/2 ;
            int no_ofdays = fxn(wt,mid) ;
            if(no_ofdays <= days)high = mid-1;
            else low = mid+1;
        }
        return low ;
    }
};