class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> output;
        postorder(root , output);
        return output;
    }
private:
    void postorder(TreeNode* root , vector<int> &output){
        if(root == NULL){
            return;
        }
        
        postorder(root->left, output);
        postorder(root->right , output);
        output.push_back(root->val);
    }
};
