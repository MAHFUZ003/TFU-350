class Solution {
  public:
    int maxLen(vector<int>& arr) {
        // Your code goes here
        unordered_map<int,int>mp;
        int temp =0;
        int n = arr.size();
        mp[0]=0;
        int ans=0;
        for(int i =0;i<n;i++)
        {
          temp += arr[i];
          if(mp.find((temp))!=mp.end())
          {
            ans = max(ans,i+1-mp[temp] );

          }
          if(mp.find(temp)==mp.end())
          {
            mp[temp]=i+1;

          }
          else 
          {
            continue;
          }
        }
        return ans;
    }
};