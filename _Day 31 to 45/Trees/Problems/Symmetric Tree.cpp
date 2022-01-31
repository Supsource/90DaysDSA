class Solution {
public:
    bool isSame(TreeNode* p,TreeNode* q){
        if(p==NULL && q==NULL) return true;
        if(p==NULL || q==NULL) return false;
        if(p->val!=q->val) return false;
        return (isSame(p->left,q->right) and isSame(p->right,q->left));
    }
    bool isSymmetric(TreeNode* root) {
        return isSame(root->left,root->right);
    }
};