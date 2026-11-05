class Solution {
  public:
    void dfs(Node* root, vector<int>& ans, int lvl, int& k){ // root left right
        if(root == NULL) return;
        if(lvl == k){
            ans.push_back(root->data); 
            return;
        } 
        dfs(root->left,ans,lvl+1,k);
        dfs(root->right,ans,lvl+1,k);
    }
    vector<int> kdistance(Node* root, int k) {
        vector<int> ans;
        dfs(root,ans,0,k);
        return ans;
    }
};
