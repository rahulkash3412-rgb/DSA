class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int s=0;
        sort(costs.begin(),costs.end());
        for(int i=0;i<costs.size();i++){
               if(costs[i]<= coins){
                  s++;
                  coins -=costs[i];
               }  
                 }
        return s;         
    }
};