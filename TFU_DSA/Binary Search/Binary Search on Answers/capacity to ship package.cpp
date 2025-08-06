class Solution {
public:
    bool check(vector<int>&weights, int days, int w) {
        int cnt = 1, current = 0;
        for (int i = 0; i < weights.size(); i++) {
            if (w < weights[i]) {
                return false;
            } else if (current + weights[i] <= w) {
                current += weights[i];
            } else

            {
                cnt++;
                current = weights[i];
            }
        }
        cout<<cnt<<" "<<w<<endl;
        return cnt <= days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = 1, high = 1e8;
        int ans = 0;
        int mid;
        while (low <= high) {
            mid = (low + high) / 2;
            if (check(weights, days, mid)) {
                high = mid - 1;
                ans = mid;
            } else {
                low = mid + 1;
            }

        }
        return ans;
    }
};