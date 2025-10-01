class Solution {
   public:
    int maxMeetings(vector<int>& start, vector<int>& end) {
        // your code goes here
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>pq;
        for (int i = 0; i < start.size(); i++) {
            pq.push({end[i], start[i]});
        }
        int prev_end =-1,starttime =0,answer=0;
        while (!pq.empty())
        {
           
            pair<int,int>temp = pq.top();
             pq.pop();
            starttime = temp.second;
            if(starttime > prev_end)
            {
                prev_end = temp.first;
                answer++;
            }

        }
         return answer;
    }
};