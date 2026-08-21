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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
         vector<vector<int>>res;
         if(root == NULL) return res;
         queue<TreeNode*>nodeq ;
          nodeq.push(root);
          bool ltor=true;
          while(!nodeq.empty()){
            int size= nodeq.size();
            vector<int>row(size);
            for(int i=0;i<size;i++){
                TreeNode*node = nodeq.front();
                nodeq.pop();
                int idx = (ltor)?i:size-i-1;
                row[idx]=node->val;
                if(node->left)nodeq.push(node->left);
                if(node->right)nodeq.push(node->right);
            }

            ltor=(!(ltor));
            res.push_back(row);

          }
          return res;
    }
};