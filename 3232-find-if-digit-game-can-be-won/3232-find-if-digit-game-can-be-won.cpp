class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int ssum=0,dsum=0;
        for(auto i :nums){
            if(i>9){
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