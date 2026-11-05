class Solution {
public:
    int levels(TreeNode* root){
        if(root == NULL) return 0;
        return 1 + max(levels(root->left),levels(root->right));
    }
    void dfs(TreeNode* root, vector<int>& ans, int level){ // root left right
        if(root == NULL) return;
        ans[level] = root->val; 
        dfs(root->left,ans,level+1);
        dfs(root->right,ans,level+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        int n = levels(root);
        vector<int> ans(n);
        dfs(root,ans,0);
        return ans;
    }
};
