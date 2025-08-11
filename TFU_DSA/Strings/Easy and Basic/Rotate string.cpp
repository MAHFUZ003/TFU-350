class Solution {
public:
    bool rotateString(string s, string goal) {
        string temp = s+s;
        int len = goal.length();
        if(s.length()!=goal.length())
        {
            return false;
        }
        for(int i =0;i<temp.length();i++)
        {
            if(i+len>temp.length())
            {
                return false;
            }
            if(temp.substr(i,len)==goal)
            {
                return true;
            }

        }
     return false;
    }
};