class Solution {
public:
int fxn(int i,vector<int>& arr,int n,vector<int>&ds){
    if(i==n){
        int cxor=0;
        for(int it :ds){
          cxor ^= it;}
          
          return cxor;
 }
    
    ds.push_back(arr[i]);
   int a = fxn(i+1,arr,n,ds);
   ds.pop_back();
  int b = fxn(i+1,arr,n,ds);
   return a+b;
}
    int subsetXORSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>ds;
        return fxn(0,nums,n,ds);
    
    }
};