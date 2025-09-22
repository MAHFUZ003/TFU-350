class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int temp = 0;
        int len = 0;
        priority_queue<int> pq;
        for (int i = 0; i < n - 1; i++) {
            pq.push(i + nums[i]);
            if (len <= i) {

                int top = pq.top();
                pq.pop();
                len = top;
                temp++;
            }
        }
        return temp;
    }
};
