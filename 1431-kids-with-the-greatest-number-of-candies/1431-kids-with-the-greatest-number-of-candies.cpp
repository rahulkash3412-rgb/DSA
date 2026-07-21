class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& kc, int c) {
        int max_candies = *max_element(kc.begin(), kc.end());
       vector<bool>ans;
        for(int i=0;i<kc.size();i++){
          ans.push_back(kc[i] + c >= max_candies);
        }
        return ans;
    }
};