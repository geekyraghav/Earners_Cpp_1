class Solution {
public:
    // Method 2
    TreeNode* invertTree(TreeNode* root) {
        if(root == NULL) return root;
        TreeNode* temp = root->left;
        root->left = invertTree(root->right);
        root->right = invertTree(temp);
        return root;
    }

    // // Method 1
    // void invert(TreeNode* root){
    //     if(root == NULL) return;
    //     TreeNode* temp = root->left;
    //     root->left = root->right;
    //     root->right = temp;
    //     invert(root->left);
    //     invert(root->right);
    // }
    // TreeNode* invertTree(TreeNode* root) {
    //     invert(root);
    //     return root;
    // }
};
