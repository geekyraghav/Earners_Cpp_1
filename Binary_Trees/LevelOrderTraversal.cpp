class Solution {
  public:  
    // Method 2
    vector<int> levelOrder(Node *root) {
        vector<int> ans;
        queue<Node*> q;
        if(root != NULL) q.push(root);
        while(q.size() > 0){
            Node* front = q.front();
            q.pop();
            ans.push_back(front->data);
            if(front->left != NULL) q.push(front->left);
            if(front->right != NULL) q.push(front->right);
        }
        return ans;
    }
    
    // // Method 1
    // int levels(Node* root){
    //     if(root == NULL) return 0;
    //     int leftLevels = levels(root->left);
    //     int rightLevels = levels(root->right);
    //     return 1 + max(leftLevels,rightLevels);
    // }
    // void dfs(Node* root, vector<int>& ans, int lvl, int& k){ // root left right
    //     if(root == NULL) return;
    //     if(lvl == k){
    //         ans.push_back(root->data); 
    //         return;
    //     } 
    //     dfs(root->left,ans,lvl+1,k);
    //     dfs(root->right,ans,lvl+1,k);
    // }
    // vector<int> levelOrder(Node *root) {
    //     int n = levels(root);
    //     vector<int> ans;
    //     for(int i=0;i<n;i++){
    //         dfs(root,ans,0,i);
    //     }
    //     return ans;
    // }
};
