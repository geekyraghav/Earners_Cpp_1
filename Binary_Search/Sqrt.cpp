class Solution {
public:
    int mySqrt(int n) { // O(logn)
        if(n==0) return 0;
        int lo = 1, hi = n;
        while(lo <= hi){
            int mid = lo + (hi-lo)/2;
            if(mid > n/mid) hi = mid - 1;
            else if(mid < n/mid) lo = mid + 1;
            else return mid;
        }
        return hi;
    }

    // int mySqrt(int x) { // TC = O(sqrt(n))
    //     for(int i=1;i<=x;i++){
    //         if(i == x/i) return i;
    //         if(i > x/i) return i-1;
    //     }
    //     return 0;
    // }
};
