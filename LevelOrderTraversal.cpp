class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>> ans;
        queue<TreeNode* > input;
        
        if (root == NULL){
            return ans;
        }
        
        
        input.push(root);
        
        
        
        while(!input.empty()){
            int size = input.size();
            vector<int> output;
            for(int i = 0 ; i < size ;i++){
                if(input.front()->left != NULL){
                    input.push(input.front() -> left);
                }
                if(input.front()->right != NULL){
                    input.push(input.front() -> right);
                }
                
                output.push_back(input.front()->val);
                input.pop();
            }
            
            ans.push_back(output);
            
            
        }
        
        return ans;
        
    }
};



