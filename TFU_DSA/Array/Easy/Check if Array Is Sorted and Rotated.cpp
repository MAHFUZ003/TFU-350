class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int x =0;
        for(int i =0;i<nums.size();i++)
        {
            if(nums[i]>=nums[(i-1+n)%n ])
            {
                continue;
            }
            else
            {
                x++;
            }
        }
        if(x<=1)
        return true;
        else
        return false;
    }
};