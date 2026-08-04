class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& n) {
        vector<int>ans;
        for(int i=0;i<n.size();i++){
            int cnt=0;
            for(int j=0;j<n.size();j++){
                 if(n[j]<n[i])cnt++;
            }
            ans.push_back(cnt);
        }
     return ans;    
    }
};