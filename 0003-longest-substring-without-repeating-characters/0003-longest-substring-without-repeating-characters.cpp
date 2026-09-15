class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        std::vector<int> ds(256, -1);
        int r=0,l=0,len=0,maxlen=0;
        while(r<n){
            if(ds[s[r]]!=-1){
                if(ds[s[r]]>=l){
                    l=ds[s[r]]+1;
                }
                }
                len = r-l+1;
                maxlen=max(maxlen,len);
                ds[s[r]] = r;
                r++;
        }
        return maxlen;
    }
};