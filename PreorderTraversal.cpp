void preorder(TreeNode *root ){
        if(root==NULL){
            return;
        }
        
        cout<<root->val<<" ";
        preorder(root->left);
        preorder(root->right);
    }
