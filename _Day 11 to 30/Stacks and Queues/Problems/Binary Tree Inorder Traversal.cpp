class Solution {
public:
    vector<int> inorderTraversal(TreeNode *root) {
        stack<TreeNode*> s;
        pushAllLeft(s, root);
        vector<int> result;
        while(!s.empty()) {
            TreeNode* p = s.top();
            s.pop();
            result.push_back(p->val);
            pushAllLeft(s,p->right);
        }
        return result;
    }
    
    void pushAllLeft(stack<TreeNode*>& s, TreeNode* root) {
        while(root) {
            s.push(root);
            root = root->left;
        }
    }
};
