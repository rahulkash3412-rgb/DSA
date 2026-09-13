class Solution {
public:
    vector<int> productExceptSelf(vector<int>& arr) {
          int n = arr.size();
        vector<int> answer(n, 1);

        int pro1 = 1;
        int pro2 = 1;
       
        for (int i = 0; i < n; i++) {
            answer[i] = pro1;
            pro1 *= arr[i];
        }
        for (int i = n - 1; i >= 0; i--) {
            answer[i] *= pro2;
            pro2 *= arr[i];
        }

        return answer;
    }
};