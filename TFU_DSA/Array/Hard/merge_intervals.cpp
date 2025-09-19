class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;
        vector<int> temp;
        temp = intervals[0];
        for (auto x : intervals) {
            if (x[0] > temp[1]) {
                ans.push_back(temp);
                temp = x;
            } else {
                temp[1] = max(x[1],temp[1]);
            }
        }
                        ans.push_back(temp);
return ans;
        
    }
};