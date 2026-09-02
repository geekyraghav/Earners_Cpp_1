class Solution {
public:
    int uniquePaths(int m, int n) {
        if(m==1 or n==1) return 1;
        return uniquePaths(m,n-1) + uniquePaths(m-1,n);
    }
};
