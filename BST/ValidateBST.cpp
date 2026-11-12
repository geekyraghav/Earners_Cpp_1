class Solution {
public:
    void dfs(TreeNode* root, vector<int>& ans){ // left root right
        if(root == NULL) return;
        dfs(root->left,ans);
        ans.push_back(root->val); 
        dfs(root->right,ans);
    }
    bool isValidBST(TreeNode* root) {
        // check if inorder is sorted
        vector<int> ans;
        dfs(root,ans);
        for(int i=0;i<ans.size()-1;i++){
            if(ans[i] >= ans[i+1]) return false;
        }
        return true;
    }
};
