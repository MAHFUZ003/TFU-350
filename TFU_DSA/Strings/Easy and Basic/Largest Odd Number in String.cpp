class Solution {
public:
    string largestOddNumber(string num) {
        string ans = "";
        int f = 0;
        for (int i = num.size() - 1; i >= 0; i--) {
            if (int(num[i] - 0) % 2 == 1) {
                f = 1;
            }
            if (f) {
                ans += num[i];
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};