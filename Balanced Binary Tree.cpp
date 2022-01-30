class Solution {
public:
    bool isBalanced(TreeNode* root) {
        int ans = height(root);
        if(ans == -1){
            return false;
        }
        
        return true;
    }
    
private:
    int height(TreeNode* root){
        if(!root){
            return 0;
        }
        
        int lh = height(root->left);
        int rh = height(root->right);
        
        if(lh == -1 || rh == -1) return -1;
        if(abs(lh - rh) > 1) return -1;
        
        
        return max(lh , rh) + 1;
    }
};
