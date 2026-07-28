class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) { int i=0,j=0;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int ans=INT_MAX;
while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] == nums2[j]) {
                return nums1[i]; // Smallest common element found
            } else if (nums1[i] < nums2[j]) {
                i++;
            } else {
                j++;
            }
        }        
        return -1 ;
    }
};