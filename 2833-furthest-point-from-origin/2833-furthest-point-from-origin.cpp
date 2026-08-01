class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int ans=0;
        int y=0,x=0;
        for(auto ch : moves){
            if(ch=='_') ans++;
            else if(ch=='L') y++;
            else x++;
        }
        return abs(ans+abs(x-y));
    }
};