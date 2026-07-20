class Solution {
public:
    vector<int> getFinalState(vector<int>& n, int k, int m) {
       while(k--){
        int idx=0,ans=n[0];
        for(int i=1;i<n.size();i++){
            if(n[i]<ans){
                ans=n[i];
                idx=i;
            }
        }
        n[idx] *=m;
       }
     return n;  
    }
};