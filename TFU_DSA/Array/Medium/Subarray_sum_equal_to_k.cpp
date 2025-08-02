class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        int total = 0;
        m[0]++;
        int cnt = 0;
        for (auto x : nums) {
            total += x;
            cnt += m[total - k];
            m[total]++;
        }
        return cnt;
    }
};