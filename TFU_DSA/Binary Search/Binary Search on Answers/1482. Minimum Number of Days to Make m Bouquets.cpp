class Solution {
public:
    long long check(vector<int>& bloomday, int m ,int d) {
        long long val = 0;
        long long n = bloomday.size();
        int cnt =0;
        for (int i = 0; i < n; i++) {
            if(bloomday[i]<=d)
            {
                cnt++;
            }
            else
            {
                cnt=0;
            }
            if(cnt>=m)
            {
                val++;
                cnt=0;
            }
        }
        return val;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long low = 1, high = 1e9, mid;
        int ans = -1;
        long long val;
        while (low <= high) {
           // cout <<low<<" "<<high<<endl;
            mid = (low + high) / 2;
            // how many bouqutes by these day
            val = check(bloomDay, k,mid);
            if (m<=val) {
                high = mid - 1;
                ans = mid;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};