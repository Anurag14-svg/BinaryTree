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


// Iterative way with two stack 

class Solution {

public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> postorder;
        if(root == NULL) return postorder;
        stack<TreeNode*> st1, st2; 
        st1.push(root); 
        while(!st1.empty()) {
            root = st1.top(); 
            st1.pop();
            st2.push(root); 
            if(root->left != NULL) {
                st1.push(root->left); 
            }
            if(root->right != NULL) {
                st1.push(root->right); 
            }
        }
        while(!st2.empty()) {
            postorder.push_back(st2.top()->val); 
            st2.pop(); 
        }
        return postorder;
    }
};


// Iterative way using single stack 

class Solution {

public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> postorder;
        if(root == NULL) return postorder;
        stack<TreeNode*> st1;
        TreeNode* current = root;  
        while(current != NULL || !st1.empty()) {
            if(current != NULL){
                st1.push(current);
                current = current->left;
            }else{
                TreeNode* temp = st1.top()->right;
                if (temp == NULL) {
                    temp = st1.top();
                    st1.pop(); 
                    postorder.push_back(temp->val);
                    while (!st1.empty() && temp == st1.top()->right) {
                        temp = st1.top();
                        st1.pop(); 
                        postorder.push_back(temp->val);
                    }
                } else {
                    current = temp;
                }
            }
        }
        return postorder;
    }
};

