class Solution
{
public:
    void rotateArrayByOne(vector<int> &nums)
    {
        int n = nums.size();
        int first_value = nums[0];
        for (int i = 0; i < n - 1; i++)
        {
            nums[i] = nums[i + 1];
        }
        nums[n - 1] = first_value;
    }
};