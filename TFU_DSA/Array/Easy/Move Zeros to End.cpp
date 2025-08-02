class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //Will travel Left To Right
        // will have two store current firstzero, 
        int pos=0;
        int n = nums.size();
        for(int i =0;i<n;i++)
    {
        if(nums[i]!=0)
        {
            swap(nums[i],nums[pos]);
        pos++;
        }
    }
       
    }
};