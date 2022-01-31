class Solution {
public:
    int maxPathSum(TreeNode* root) {
        if(root == NULL){
            return NULL;
        }
        int maxi = INT_MIN;
        int res = sum(root , maxi);
        return maxi;
    }
private:
    int sum(TreeNode* root , int& maxi){
        if(root == NULL){
            return 0;
        }
        
        int lhsum = max(0 , sum(root->left, maxi));
        int rhsum = max(0,sum(root->right, maxi));
        
        maxi = max(maxi , lhsum + rhsum + root->val);
        
        
        return root->val + max(lhsum , rhsum);
    }
};
