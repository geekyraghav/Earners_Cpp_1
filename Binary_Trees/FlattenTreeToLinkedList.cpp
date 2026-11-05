class Solution {
public:
    // Method 2
    void flatten(TreeNode* root) {
        if(root == NULL) return;
        flatten(root->left);
        flatten(root->right);
        TreeNode* left = root->left;
        TreeNode* right = root->right;
        root->left = NULL;
        if(left != NULL) root->right = left;
        else root->right = right;
        TreeNode* temp = left;
        while(temp != NULL && temp->right != NULL) temp = temp->right;
        if(temp != NULL) temp->right = right;
    }

    // // Method 1
    // void dfs(TreeNode* root, vector<TreeNode*>& ans){ // root left right
    //     if(root == NULL) return;
    //     ans.push_back(root);
    //     dfs(root->left,ans);
    //     dfs(root->right,ans);
    // }
    // void flatten(TreeNode* root) {
    //     vector<TreeNode*> ans;
    //     dfs(root,ans);
    //     int n = ans.size();
    //     for(int i=0;i<n;i++){
    //         if(i < n-1) ans[i]->right = ans[i+1];
    //         ans[i]->left = NULL;
    //     }
    // }
};
