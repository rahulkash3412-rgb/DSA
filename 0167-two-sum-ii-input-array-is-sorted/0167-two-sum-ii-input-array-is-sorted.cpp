class Solution {
public:
    vector<int> twoSum(vector<int>& num, int t) {
    
       for(int i=0;i<num.size();i++){
          int low=i+1;
          int high =num.size()-1;
     
        int first = num[i] ;
        int sec = t - first ;

        while(low<=high){
          int  mid = low +(high - low)/2 ; 
            if(num[mid]==sec){
               
                return {i+1,mid+1};
            }
            else if(num[mid]< sec){
                low = mid+1;
            }
            else high = mid-1;
 }

       }
       return {};
    }
};