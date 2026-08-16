class Solution {
public:
    int search(vector<int>& arr, int target) {
        int n = arr.size();
        int lo = 0, hi = n-1;
        while(lo <= hi){ // O(logn)
            int mid = (lo+hi)/2;
            if(arr[mid] > target) hi = mid - 1;
            else if(arr[mid] < target) lo = mid + 1;
            else return mid;
        }
        return -1;
    }
};
