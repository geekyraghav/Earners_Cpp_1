class Solution {
  public:
    int size(Node* root) {
        if(root == NULL) return 0;
        return 1 + size(root->left) + size(root->right);
    }
    bool isMaxHeap(Node* root) {
        if(root == NULL) return true;
        if(root->left != NULL && root->left->data > root->data) return false;
        if(root->right != NULL && root->right->data > root->data) return false;
        return isMaxHeap(root->left) && isMaxHeap(root->right);
    }
    bool isCBT(Node* root, int i, int& n) { // n is size
        if(root == NULL) return true;
        if(i > n) return false;
        return isCBT(root->left,2*i,n) && isCBT(root->right,2*i+1,n);
    }
    bool isHeap(Node* root) {
        int n = size(root);
        return isMaxHeap(root) && isCBT(root,1,n);
    }
};
