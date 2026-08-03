class Solution {
public:
    int reverseDegree(string s) {
        int ans=0;
        int i=1;
        for(int c : s){
            int k = 26-(c-'a');
             ans += k*i;
             i++;
        }
        return ans;
    }
};