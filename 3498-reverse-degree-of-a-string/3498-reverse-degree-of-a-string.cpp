class Solution {
public:
    int reverseDegree(string s) {
        int ans=0;
        int i=1;
        for(int ch : s){
            int k = 26-(ch-'a');
             ans += k*i;
             i++;
        }
        return ans;
    }
};