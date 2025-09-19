class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {

        int cnt = 0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int p = 0;
        for (int i = 0; i < s.size(); i++) {
            if (cnt == g.size()) {
                break;
            }
            if (g[p] <= s[i]) {
                p++;
                cnt++;
            }
        }
        return cnt;
    }
};