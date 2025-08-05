class Solution {
public:
    long long check(vector<int>& piles, int k) {
        long long val = 0;
        long long n = piles.size();
        for (int i = 0; i < n; i++) {
            val +=( (piles[i]+k-1)/k);
        }
        return val;
    }
    int minEatingSpeed(vector<int>& piles, int h) {

        long long low = 1, high = 1e9, mid;
        int ans = 0;
        long long val;
        while (low <= high) {
            cout <<low<<" "<<high<<endl;
            mid = (low + high) / 2;
            val = check(piles, mid);
            if (h >= val) {
                high = mid - 1;
                ans = mid;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};