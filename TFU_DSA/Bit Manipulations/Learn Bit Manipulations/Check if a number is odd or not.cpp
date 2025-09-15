class Solution {
public:
    string even_or_odd(int n) {
       if((n& (1)))
       return "odd";
       else
       return "even";
    }
};