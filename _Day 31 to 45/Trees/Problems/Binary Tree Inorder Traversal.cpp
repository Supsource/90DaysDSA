class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
         vector<int> nodes;
        if(root!=NULL)
        {
            inorderTraversal(root->left);
            nodes.push_back(root->val);
            inorderTraversal(root->right);
        }
            
        return nodes;
    }
};