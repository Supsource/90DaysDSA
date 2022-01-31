void fun(TreeNode* root){
   if(root->left){
      if(root->right) s.push(root->right);
       root->right=root->left;
       root->left=NULL;
       fun(root->right);
   }
    else{
        if(root->right)fun(root->right);
        else{
            if(!s.empty()){
                root->right=s.top();
                s.pop();
                fun(root->right);
            }
        }
    }
}

void flatten(TreeNode* root) {
    if(!root) return ;
    fun(root); 
}
