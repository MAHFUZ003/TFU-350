class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> m;
        int n = nums.size();
        vector<int> ans(2);
        for (int i = 0; i < n; i++) {
            if (m.find(target - nums[i]) != m.end()) {
                ans[0] = i ;
                ans[1] = m[target-nums[i]];
                return ans;
            }
            m[nums[i]] = i ;
        }
        return {};
    }
};