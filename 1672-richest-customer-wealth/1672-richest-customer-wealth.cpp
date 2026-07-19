class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int rich=0;
        for(auto x:accounts){
            int sum=0;
            for(int money:x){
                sum+=money;
            }
            rich=max(sum,rich);
        }
        return rich;
    }
};