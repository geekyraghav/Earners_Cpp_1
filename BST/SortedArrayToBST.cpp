class Solution {
public:
    TreeNode* convert(vector<int>& arr, int lo, int hi) {
        if(lo > hi) return NULL;
        int mid = (lo+hi)/2;
        TreeNode* root = new TreeNode(arr[mid]);
        root->left = convert(arr,lo,mid-1);
        root->right = convert(arr,mid+1,hi);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& arr) {
        int n = arr.size();
        return convert(arr,0,n-1);
    }
};
