class Solution {
public:
    int findDelayedArrivalTime(int at, int dt) {
        int ans = at+dt;
        
        ans = ans%24;
            return ans;
    
    }
};