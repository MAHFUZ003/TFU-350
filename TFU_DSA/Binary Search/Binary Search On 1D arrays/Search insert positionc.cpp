class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int high = nums.size()-1;
        int low = 0;
        int mid;
        int answer=0;
        while (low <= high) {
            mid = (low + high) / 2;
            if (nums[mid] == target) {
                answer = mid;
                break;
            } else if (nums[mid] < target) {
                low = mid + 1;
                answer = mid+1;
            }

            else {
                high = mid - 1;
            
            }
        }
        return answer;
    }
};