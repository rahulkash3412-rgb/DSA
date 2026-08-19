/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> postorder(Node* root) {
        if (!root) return {};
          vector<int> post ;
          stack<Node*>st ; 
          st.push(root);
          while(!st.empty()){
            Node* cur = st.top();
            st.pop();

        post.push_back(cur->val);
        for (Node* child : cur->children) {
                if (child) {
                    st.push(child);
                }
            }
          }
          reverse(post.begin(),post.end());
          return post ;
    }
};