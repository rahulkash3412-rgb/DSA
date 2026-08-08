class Solution {
public:
    vector<int> twoSum(vector<int>& num, int t) {
    int i=0;
    int j=num.size()-1;
   

        while(i<=j){
         int s = num[i]+num[j];
            if(s==t){
               
                return {i+1,j+1};
            }
            else if(s<t){
                i++;
            }
            else j--;
 }

    
       return {};
    }
};