class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> mp;
        int ans = 0;
        int temp = 0;
        for (int i = 0; i < s.length(); i++) {

            if (mp.find(s[i]) == mp.end()) {
                mp[s[i]] = i;

                temp++;
                ans = max(temp, ans);
            } else {
               
                temp =min(temp+1,( i - mp[s[i]]));
                ans = max(temp, ans);
                 mp[s[i]]=i;
            }
            cout <<i<<" "<<temp<<endl;
        }
        return ans;
    }
};