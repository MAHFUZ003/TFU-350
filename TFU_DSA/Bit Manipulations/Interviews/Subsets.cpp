class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int digit = nums.size();
        vector<vector<int>> ans;
        for (int i = 0; i < pow(2, digit); i++) {
            vector<int> v;
            for (int j = 0; (1 << j) <= i; j++) {
                if ((i & (1 << j)) != 0) {
                    v.push_back(nums[j]);
                }
            }
            ans.push_back(v);
        }
        return ans;
    }
};