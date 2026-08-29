class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>next;
        vector<int>ans;
        stack<int>st;
         for( int num : nums2){
            while(!st.empty() && st.top()<num){
                next[st.top()]=num;
                st.pop();
            }
            st.push(num);
         }
        ans.reserve(nums1.size());
        for(int num:nums1){
            if(next.count(num)){
                ans.push_back(next[num]);
            }
            else{
                ans.push_back(-1);
            }
        }
        return ans;
    }
};