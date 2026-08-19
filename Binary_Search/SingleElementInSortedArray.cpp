class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int n = arr.size();
        if(n==1) return arr[0];
        if(arr[0] != arr[1]) return arr[0];
        if(arr[n-1] != arr[n-2]) return arr[n-1];
        int lo = 0, hi = n-1;
        while(lo <= hi){
            int mid = lo + (hi-lo)/2;
            if(arr[mid] != arr[mid-1] && arr[mid] != arr[mid+1]) return arr[mid];
            int f = mid, s = mid; // f is first mid, s is second mid
            if(arr[mid] == arr[mid-1]) f = mid - 1;
            else s = mid + 1;
            if((f-lo) % 2 == 1) hi = f - 1; // f-lo is left side length
            else lo = s + 1;
        }
        return 8875;
    }
};
