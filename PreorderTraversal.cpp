void preorder(TreeNode *root ){
        if(root==NULL){
            return;
        }
        
        cout<<root->val<<" ";
        preorder(root->left);
        preorder(root->right);
    }


// Iterative approach 

vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(root==NULL){
            return ans;
        }
        stack<TreeNode* > st;
        
        st.push(root);
        
        while(!st.empty()){
            TreeNode* top = st.top();
            st.pop();
            ans.push_back(top->val);
            
            if(top->right != NULL){
                st.push(top->right);
            }
            if(top->left != NULL){
                st.push(top->left);
            }
            
            
        }
        
        return ans;
    }
