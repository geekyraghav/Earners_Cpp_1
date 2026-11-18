class Solution {
public:
    // Method 3 (Morris)
    void flatten(TreeNode* root) {
        TreeNode* curr = root;
        while(curr){
            if(curr->left){ // find pred 
                TreeNode* pred = curr->left;
                while(pred->right) pred = pred->right;
                pred->right = curr->right;
                curr->right = curr->left;
                curr->left = NULL;
            }
            else curr = curr->right;
        }
    }
};
