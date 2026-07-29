class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
     int res=INT_MIN;
        for(auto line : sentences ){
            int cnt =1;
            for(auto word : line){
                if(word == ' '){
                    cnt++;
                }
            res =max(cnt,res);
            }
        }
        return res;
    }
};