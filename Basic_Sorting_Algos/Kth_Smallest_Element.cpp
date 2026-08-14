class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
        // Selection Sort
        int n = arr.size();
        for(int j=0;j<k;j++){ // k passes
            int mn = arr[j], mnIdx = j;
            for(int i=j;i<n;i++){
                if(arr[i] < mn){
                    mn = arr[i];
                    mnIdx = i;
                }
            }
            swap(arr[j],arr[mnIdx]);
        }
        return arr[k-1];
    }
};
