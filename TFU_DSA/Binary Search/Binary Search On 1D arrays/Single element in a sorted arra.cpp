class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low = 0, high = nums.size() - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;

            // Make mid even for pairing
            if (mid % 2 == 1) mid--;

            if (nums[mid] == nums[mid + 1]) {
                low = mid + 2; // skip the pair
            } else {
                high = mid;
            }
        }

        return nums[low];
    }
};
