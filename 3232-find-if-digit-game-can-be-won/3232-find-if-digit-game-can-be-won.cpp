class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        long ssum=0,dsum=0;
        int choice=INT_MIN;
        for(auto i :nums){
            if(i/10){
                dsum += i;
            }
            else{
                ssum += i;
            }
        }
        if(dsum == ssum) return false;

        return true;
    }
};