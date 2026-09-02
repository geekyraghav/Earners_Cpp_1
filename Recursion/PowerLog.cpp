class Solution {
public:
    double power(double a, long long b) {
        if(b==0) return 1;
        double p = power(a,b/2);
        return (b%2 == 0) ? p * p : p * p * a;
    }

    double myPow(double a, int b) {
        bool flag = (b >= 0); // flag is true is b is positive
        long long b2 = b;
        double ans = power(a,abs(b2));
        if(flag==false) ans = 1/ans;
        return ans;
    }
};
