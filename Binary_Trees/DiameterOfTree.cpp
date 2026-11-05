class Solution {
public:
    int dia;
    int levels(TreeNode* root){
        if(root == NULL) return 0;
        int leftLevels = levels(root->left);
        int rightLevels = levels(root->right);
        dia = max(dia,leftLevels+rightLevels); // EXTRA
        return 1 + max(leftLevels,rightLevels);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        dia = 0;
        levels(root);
        return dia;
    }
};
