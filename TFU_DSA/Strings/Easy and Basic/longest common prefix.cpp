class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // take values of first string ,and compare with others
        string temp = strs[0];
        string ans = "";
        for(int pos =0;pos<temp.length();pos++)
        {
            for(int i =0;i<strs.size();i++)
            {
                if(strs[i].length()<pos+1)
                {
                    return ans;
                }
                if(strs[i][pos]!=temp[pos])
                {
                    return ans;
                }
                
            }ans+=temp[pos];
        }
        return ans;
      
    }
};