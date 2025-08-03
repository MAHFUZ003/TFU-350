class Solution{
public:
    int lowerBound(vector<int> &nums, int x){
        int low = 0;
        int high = nums.size() - 1;
        int mid;
        int index;
        while (low <= high) {
            mid = (low + high) / 2;
            if (nums[mid] <= x) {
              low = mid + 1;
              
            } else {
                index = mid;
                  low = mid - 1;
            }
        }
        return index+1;
    }
};