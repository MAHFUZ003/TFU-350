int findMin(vector<int>& nums) {
    int low = 0, high = nums.size() - 1;

    while (low < high) {
        int mid = low + (high - low) / 2;
        
        if (nums[mid] < nums[high]) {
            // min is in right part
            low = mid + 1;
        } else {
            // min is in left part (or could be mid)
            high = mid;
        }
    }

    return nums[low]; // or nums[high]
}
