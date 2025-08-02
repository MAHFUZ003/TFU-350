class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxProduct = nums[0];

        int current = 1;
        // Left to right
        for (int i = 0; i < n; i++) {
            current *= nums[i];
            maxProduct = max(maxProduct, current);
            if (nums[i] == 0) current = 1;
        }

        current = 1;
        // Right to left
        for (int i = n - 1; i >= 0; i--) {
            current *= nums[i];
            maxProduct = max(maxProduct, current);
            if (nums[i] == 0) current = 1;
        }

        return maxProduct;
    }
};
