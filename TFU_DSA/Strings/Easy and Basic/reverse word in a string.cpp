class Solution
{
public:
    string reverseWords(string s)
    {
        stack<string> st;
        string temp = "";
        string ans = "";
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != ' ')
            {
                temp += s[i];
            }
            else
            {
                if (temp != "")
                {
                    st.push(temp);
                    temp = "";
                }
            }
        }
        if (temp != "")
        {
            st.push(temp);
        }
        while (st.size())
        {
            string val = st.top();
            if (st.size() == 1)
            {
                ans += val;
            }

            else
            {
                ans += val + " ";
            }
            st.pop();
        }
        return ans;
    }
};