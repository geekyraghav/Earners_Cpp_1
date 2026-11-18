class Solution {
public:
    // Method 2
    void morris(TreeNode* root, vector<int>& ans){ // left root right
        TreeNode* curr = root;
        while(curr){
            if(curr->left != NULL){
                // find predecessor
                TreeNode* pred = curr->left;
                while(pred->right and pred->right != curr) 
                    pred = pred->right;
                if(pred->right == NULL){
                    pred->right = curr; // LINK
                    curr = curr->left;
                }
                else{ // pred->right == curr
                    pred->right = NULL; // UNLINK
                    ans.push_back(curr->val);
                    curr = curr->right;
                }
            }
            else{ // curr->left == NULL
                ans.push_back(curr->val);
                curr = curr->right;
            }
        }
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        morris(root,ans);
        return ans;
    }
};
