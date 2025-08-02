class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int total =0;
        for(auto x: nums)
        {
            total +=x;
        }
        int n = nums.size();
        int final_sum = (n*(n+1))/2;
        return final_sum - total;
    }
};