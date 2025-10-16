class Solution {
public:
    double cal(double x, long long n) {   // use long long to prevent overflow
        if (n == 0) return 1;
        double half = cal(x, n / 2);
        if (n % 2 == 0) {
            return half * half;
        } else {
            return half * half * x;
        }
    }

    double myPow(double x, int n) {
        long long N = n;      // convert to long long
        if (N < 0) {
            x = 1 / x;
            N = -N;
        }
        return cal(x, N);
    }
};
