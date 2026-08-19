class Solution {
public:
    int search(vector<int>& arr, int target) {
        int n = arr.size();
        int lo = 0, hi = n-1;
        while(lo <= hi){
            int mid = lo + (hi-lo)/2;
            if(arr[mid] == target) return mid;
            if(arr[lo] <= arr[mid]){ // left half is sorted
                if(arr[lo] <= target && target <= arr[mid]) hi = mid - 1;
                else lo = mid + 1;
            }
            else{ // right half is sorted
                if(arr[mid] <= target && target <= arr[hi]) lo = mid + 1;
                else hi = mid - 1;
            }
        }
        return -1;
    }
};
