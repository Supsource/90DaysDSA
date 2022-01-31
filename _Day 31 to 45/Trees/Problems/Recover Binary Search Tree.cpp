class Solution {
    TreeNode* first{nullptr}, *second{nullptr}, *prev{nullptr};
public:
    void verifyNode(TreeNode* node){
	
	// check if previous pointer == null or node values are correct inorder traversal i.e prev is smaller than current node
        if(prev == nullptr || (prev->val<node->val)){ 
            prev = node;
            return;
        }
        
        if(first == nullptr ){
            first = prev;
            second = node;
        }else{ 
            second = node;
        }
    }
    void morrisInorder(TreeNode* root){
        if(!root)return;
        while(root){
            if(root->left == nullptr){
                verifyNode(root);
                root = root->right;
            }else{
                TreeNode* iter = root->left;
                // find predecessor
                while(iter->right && iter->right!=root){
                    iter = iter->right;
                }
                
                if(iter->right == nullptr)//create morris thread
                {
                    iter->right = root;
                    root = root->left;
                }else{
                    iter->right = nullptr;
                    verifyNode(root);
                    root = root->right;
                }
            }
        }
    }
    void recoverTree(TreeNode* root) {
        morrisInorder(root);
        swap(first->val, second->val);
    }
};