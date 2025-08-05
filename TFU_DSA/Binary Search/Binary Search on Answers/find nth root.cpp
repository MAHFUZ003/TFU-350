class Solution {
public:
    long long check(int n, int k)
    {
        long long val = 1;
        for(int i = 0; i < n; i++)
        {
            val *= k;
            if (val > 1e18) return val; // prevent overflow
        }
        return val;
    }

    int NthRoot(int N, int M) {
        int low = 1, high = M;

        while (low <= high)
        {
            int mid = (low + high) / 2;
            long long val = check(N, mid);

            if (val == M)
                return mid;
            else if (val < M)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return -1;
    }
};
