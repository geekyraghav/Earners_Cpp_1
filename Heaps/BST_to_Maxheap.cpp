class Solution {
  public:
    void inorder(Node* root, vector<int>& arr) {
        if(root == NULL) return;
        inorder(root->left,arr);
        arr.push_back(root->data);
        inorder(root->right,arr);
    }
    void postorder(Node* root, vector<int>& arr, int& idx) {
        if(root == NULL) return;
        postorder(root->left,arr,idx);
        postorder(root->right,arr,idx);
        root->data = arr[idx++];
    }
    void convertToMaxHeap(Node* root) {
        vector<int> arr; // stores sorted values
        inorder(root,arr);
        int idx = 0;
        postorder(root,arr,idx);
    }
};
