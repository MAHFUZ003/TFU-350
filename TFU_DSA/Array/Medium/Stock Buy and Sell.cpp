class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minimum=prices[0];
        int answer= 0;
        for(auto x:prices)
        {
            answer = max(answer,x-minimum);
            minimum = min(minimum,x);
        }
        return answer;
    }
};