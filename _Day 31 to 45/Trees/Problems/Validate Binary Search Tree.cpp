bool isValidBSTAdd(TreeNode* root, long min, long max) 
    {
        if(root==NULL)
        {
            return true;
        }
        if(root->val>min && root->val<max)
        {
             return isValidBSTAdd(root->left,min, root->val)  
            && isValidBSTAdd(root->right,root->val,max);
        }
        return false;
        
       
    }

class Solution {
public:
    bool isValidBST(TreeNode* root) 
    {
      
        return isValidBSTAdd(root,LONG_MIN, LONG_MAX);
    }
};