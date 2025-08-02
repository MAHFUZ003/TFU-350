int maxSubArray(vector<int>& nums) {
    int currSum = nums[0];  // Start with first element
    int maxSum = nums[0];   // Max also starts here

    for (int i = 1; i < nums.size(); i++) {
        // Choose to extend previous subarray or start new from nums[i]
        currSum = max(nums[i], currSum + nums[i]);
        maxSum = max(maxSum, currSum);
    }

    return maxSum;
}
