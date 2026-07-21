class Solution {
public:
    int minimumSum(int num) {
        vector<int> temp;

        while (num) {
            temp.push_back( num % 10);
            num /= 10;
        }

        sort(temp.begin(), temp.end());

        int x = temp[0] * 10 + temp[2];
        int y = temp[1] * 10 + temp[3];

        return x + y;
    }
};