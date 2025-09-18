class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        int n = numRows;
        for(int i=0;i<n;i++)
        {
            vector<int>v;
            for(int j =0;j<=i;j++)
            {
                if(j==0 || j == i)
                {
                    v.push_back(1);
                }
                else 
                {
                    int temp = ans[i-1][j] + ans[i-1][j-1];
                    v.push_back(temp);
                }

            }
            ans.push_back(v);
        }
        return ans;
        
    }
};