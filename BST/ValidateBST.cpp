class Solution {
public:
    // Method 2
    class Triplet{
    public:
        long long max;
        long long min;
        bool isBST;
    };
    Triplet solve(TreeNode* root){
        if(root == NULL) return {LLONG_MIN,LLONG_MAX,true};
        Triplet left = solve(root->left);
        Triplet right = solve(root->right);
        long long val = root->val;
        long long mx = max(val,max(left.max,right.max));
        long long mn = min(val,min(left.min,right.min));
        bool isBST = (val > left.max && val < right.min && left.isBST && right.isBST);
        return {mx,mn,isBST};
    }
    bool isValidBST(TreeNode* root) {
        return solve(root).isBST;
    }

    // // Method 1
    // void dfs(TreeNode* root, vector<int>& ans){ // left root right
    //     if(root == NULL) return;
    //     dfs(root->left,ans);
    //     ans.push_back(root->val); 
    //     dfs(root->right,ans);
    // }
    // bool isValidBST(TreeNode* root) {
    //     // check if inorder is sorted
    //     vector<int> ans;
    //     dfs(root,ans);
    //     for(int i=0;i<ans.size()-1;i++){
    //         if(ans[i] >= ans[i+1]) return false;
    //     }
    //     return true;
    // }
};
