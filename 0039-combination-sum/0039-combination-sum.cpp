class Solution {
public:
       void fxn(int i,int k,vector<int>&arr,vector<vector<int>>&ans,vector<int>&ds){
        if(i == arr.size()){
            if (k == 0){
                ans.push_back(ds);
                }    return ;
        }
            if(arr[i]<= k){
                ds.push_back(arr[i]);
                fxn(i,k-arr[i],arr,ans,ds);
                ds.pop_back();
                }
                fxn(i+1,k,arr,ans,ds);

        }
       


    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
     fxn(0,target,candidates,ans,ds);
     return ans;
    }
};