class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        if(!root)return false;                                         //Terminating Condition
        sum=sum-root->val;                                             //Body
        if(sum==0&&!root->left&&!root->right)return true;              //body
        return hasPathSum(root->left,sum)||hasPathSum(root->right,sum);//Propagation
    }
};