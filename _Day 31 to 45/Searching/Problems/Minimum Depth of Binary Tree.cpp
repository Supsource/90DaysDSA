class Solution {
public:
    int minDepth(TreeNode* root) {
        if (root==nullptr){
            return 0;
        }
        else if (root->right==nullptr||root->left==nullptr){
            return max(minDepth(root->left),minDepth(root->right))+1;
        }
        else{
            return min(minDepth(root->left),minDepth(root->right))+1;
        }
    }
};