class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int maxi =0;
        int res = height(root, maxi);
        return maxi;
    }
    
    
private:
    int height(TreeNode* root ,int &maxi){
        if(root==NULL){
            return 0;
        }
        
        int lh = height(root->left, maxi);
        int rh = height(root->right, maxi);
        
        maxi = max(maxi , lh+rh);
        
        return max(lh , rh) + 1;
    }
};
