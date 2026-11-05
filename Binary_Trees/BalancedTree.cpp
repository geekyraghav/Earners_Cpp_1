class Solution {
public:
    bool ans;
    int levels(TreeNode* root){
        if(root == NULL) return 0;
        int leftLevels = levels(root->left);
        int rightLevels = levels(root->right);
        if(abs(leftLevels-rightLevels) > 1) ans = false; // EXTRA LINE VVIMP
        return 1 + max(leftLevels,rightLevels);
    }
    bool isBalanced(TreeNode* root) {
        ans = true; // true means balanced
        levels(root);
        return ans;
    }
};
