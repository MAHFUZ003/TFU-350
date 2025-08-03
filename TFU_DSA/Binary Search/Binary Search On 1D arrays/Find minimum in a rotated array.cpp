class Solution {
public:
    int findKRotation(vector<int> &nums) {
        int n = nums.size();
        int low = 0, high = n - 1;

        // Case when array is already sorted
        if (nums[low] <= nums[high]) {
            return 0;
        }

        while (low <= high) {
            int mid = (low + high) / 2;
            int next = (mid + 1) % n;
            int prev = (mid + n - 1) % n;

            // Check if mid is the minimum element
            if (nums[mid] <= nums[prev] && nums[mid] <= nums[next]) {
                return mid;
            }

            // Decide which side to go
            if (nums[mid] >= nums[low]) {
                // Left half is sorted, pivot must be in right half
                low = mid + 1;
            } else {
                // Right half is sorted, pivot must be in left half
                high = mid - 1;
            }
        }

        return 0; // Shouldn't reach here normally
    }
};
