class Solution {
  public:
    class Quad{
        public:
            long long max;
            long long min;
            bool isBST;
            int size;
        };
        int maxSize;
        Quad solve(Node* root){
            if(root == NULL) return {LLONG_MIN,LLONG_MAX,true,0};
            Quad left = solve(root->left);
            Quad right = solve(root->right);
            long long val = root->data;
            long long mx = max(val,max(left.max,right.max));
            long long mn = min(val,min(left.min,right.min));
            bool isBST = (val > left.max && val < right.min && left.isBST && right.isBST);
            int size = 1 + left.size + right.size;
            if(isBST) maxSize = max(maxSize,size);
            return {mx,mn,isBST,size};
        }
    int largestBst(Node* root) {
        maxSize = 0;
        solve(root);
        return maxSize;
    }
};
