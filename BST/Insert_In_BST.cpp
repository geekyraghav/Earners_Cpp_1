class Solution {
public:
    // Method 2
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root == NULL) return new TreeNode(val);
        else if(root->val > val){ // attach it to LST
            root->left = insertIntoBST(root->left,val);
        } 
        else{ // root->val < val
            root->right = insertIntoBST(root->right,val);
        }
        return root;
    }

    // // Method 1
    // void insert(TreeNode* root, int val){
    //     if(root->val > val){ 
    //         if(root->left == NULL) root->left = new TreeNode(val);
    //         else insert(root->left,val);
    //     }
    //     else{ // root->val < val
    //         if(root->right == NULL) root->right = new TreeNode(val);
    //         else insert(root->right,val);
    //     }
    // }
    // TreeNode* insertIntoBST(TreeNode* root, int val) {
    //     if(root == NULL) return new TreeNode(val);
    //     insert(root,val);
    //     return root;
    // }
};
