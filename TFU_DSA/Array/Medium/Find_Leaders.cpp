class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
        int n = nums.size();
        int maximum = INT_MIN;
        vector<int> answer;

        for (int i = n - 1; i >= 0; i--) {
            if (nums[i] > maximum) {
                answer.push_back(nums[i]);
                maximum = nums[i];
            }
        }

        reverse(answer.begin(), answer.end());
        return answer;
    }
};
