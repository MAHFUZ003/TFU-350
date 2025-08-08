class Solution {
public:
    string removeOuterParentheses(string s) {
        // traverse start to end 
        int n = s.length();
        string ans = "";
        int f=0;
        for(int i =0;i<n;i++)
        {
            if(s[i]=='(')
            {
                f++;
                if(f==1)
                {
                    continue;
                }
                ans+=s[i];
            }
            else 
            {
                f--;
                 if(f==0)
                {
                    continue;
                }
                ans+=s[i];

            }
             
            
        }
        return ans;
    }
};