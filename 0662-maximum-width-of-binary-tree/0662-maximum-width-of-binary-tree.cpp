/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(!root)return 0;
        int ans=0;
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        while(!q.empty()){
            long size= q.size();
            long mmin=q.front().second;
            int fst , lst ;
            for(int i=0;i<size;i++){
                long long cur_id = q.front().second - mmin; 
                TreeNode* node = q.front().first;
                q.pop();
                if(i==0)fst =cur_id;
                if(i==size-1)lst = cur_id;
                if(node->left)q.push({
                    node->left,cur_id*2+1
                });
                if(node->right)q.push({
                    node->right,cur_id*2+2
                });
            }
            ans = max(ans,lst-fst+1);
        }
        return ans;
    }
};