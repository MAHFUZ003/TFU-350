class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
        {
            return false;
        }
        map<char,int>mps,mpt;
        for(int i =0;i<s.length();i++)
        {
            mps[s[i]]++;
            mpt[t[i]]++;
        }
        if(mps!=mpt)
        {
            return false;
        }
        return true;
        
    }
};