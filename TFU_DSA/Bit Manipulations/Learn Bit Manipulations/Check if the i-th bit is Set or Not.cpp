class Solution {
public:
    bool checkIthBit(int n, int i) {
       if((n& (1<<i)))
       return true;
       else
       return false;
    }
};