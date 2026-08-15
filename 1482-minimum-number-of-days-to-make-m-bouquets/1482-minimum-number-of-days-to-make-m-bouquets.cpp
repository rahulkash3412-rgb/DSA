class Solution {
public:
bool canMake(vector<int>& bloomDay, int m, int k, int day){

    int count=0 ; 
    int bouquets =0;
    for (int d : bloomDay) {
            if (d <= day) {
                count++;
                if (count == k) {
                    bouquets++;
                    count = 0;
                }
            } else {
                count = 0;
            }
        }
        return bouquets >= m;

}
    int minDays(vector<int>& bloomDay, int m, int k) {
       if((long long) m * k  > bloomDay.size())return -1;
      
      int low = INT_MAX, high = INT_MIN;
        for (int day : bloomDay) {
            low = min(low , day);
            high = max(high, day);
        }
       int result = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (canMake(bloomDay, m, k, mid)) {
                result = mid;    
                high = mid - 1;
            } else {
                low = mid + 1;   
            }
        }
        return result;

    }
};