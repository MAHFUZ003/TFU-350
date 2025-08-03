class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ans(2, -1);

        // Lower bound (first occurrence)
        int low = 0, high = n - 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] >= target)
                high = mid - 1;
            else
                low = mid + 1;
        }
        if (low < n && nums[low] == target)
            ans[0] = low;

        // Upper bound (last occurrence)
        low = 0, high = n - 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] > target)
                high = mid - 1;
            else
                low = mid + 1;
        }
        if (high >= 0 && nums[high] == target)
            ans[1] = high;

        return ans;
    }
};
