class Solution {
public:
    int findDelayedArrivalTime(int at, int dt) {
        int ans = at+dt;
        if(ans>= 24){
        ans = ans%24;
            return ans;
        }
        else return ans;
    }
};