class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        vector<int>ans;
        for(int i=1;i<=n;i++){
           string a=to_string(i);
           string b=to_string(n-i);
           if(a.find('0')==string::npos && b.find('0')==string::npos){
            ans.push_back(i);
            ans.push_back(n-i);
            break;
           }

            }
        return ans;
    }
};