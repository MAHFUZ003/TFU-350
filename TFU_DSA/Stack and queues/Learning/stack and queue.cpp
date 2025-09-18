class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (auto x : s) {
            if (st.size() == 0) {
                st.push(x);
            } else if (x == '(' || x == '{' || x == '[') {
                st.push(x);
            } else if (x == ')') {
                if (st.top() == '(') {
                    st.pop();
                } else
                    st.push(x);

            } else if (x == '}') {
                if (st.top() == '{') {
                    st.pop();
                } else
                    st.push(x);

            } else if (x == ']') {
                if (st.top() == '[') {
                    st.pop();
                } else
                    st.push(x);
            }
        }
        if(st.size()==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};