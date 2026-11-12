class Solution {
public:
    int ans;
    int k2;
    void dfs(TreeNode* root){ // left root right
        if(root == NULL) return;
        dfs(root->left);
        k2--;
        if(k2 == 0) ans = root->val;
        dfs(root->right);
    }
    int kthSmallest(TreeNode* root, int k) {
        ans = 0;
        k2 = k;
        dfs(root);
        return ans;
    }
};
