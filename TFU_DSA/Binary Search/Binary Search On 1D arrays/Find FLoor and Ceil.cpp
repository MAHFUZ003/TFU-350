class Solution {
public:
    vector<int> getFloorAndCeil(vector<int> nums, int x) {
        sort(nums.begin(), nums.end());
        int n = nums.size();

        // Floor
        int floor = -1, low = 0, high = n - 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] == x) {
                floor = x;
                break;
            }
            if (nums[mid] < x) {
                floor = nums[mid];
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        // Ceil
        int ceil = -1;
        low = 0, high = n - 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] == x) {
                ceil = x;
                break;
            }
            if (nums[mid] > x) {
                ceil = nums[mid];
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return {floor, ceil};
    }
};
