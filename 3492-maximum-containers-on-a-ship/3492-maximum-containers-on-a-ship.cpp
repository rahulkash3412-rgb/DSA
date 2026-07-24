class Solution {
public:
    int maxContainers(int n, int w, int maxw) {
        int ans = maxw/w;
      if(ans<= n*n) return (ans);
      else return n*n;
    }
};