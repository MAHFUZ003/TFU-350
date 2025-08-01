class Solution
{
public:
    int largestElement(vector<int> &nums)
    {
        int ans = INT_MIN;
        for (auto x : nums)
        {
            if (x > ans)
                ans = x;
        }
        return ans;
    }
};