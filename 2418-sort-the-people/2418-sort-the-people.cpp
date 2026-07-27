class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
          int n = names.size();
        vector<pair<int,string>> ans(n);
        for(int i = 0; i < n; i++){
            ans[i] = {heights[i],names[i]};
        }
        std::sort(ans.begin(),ans.end(),greater<pair<int,string>>());
        vector<string> res(n);
        for(int i = 0; i < n; i++){
            res[i] = ans[i].second;
        }
        return res;
    }
};