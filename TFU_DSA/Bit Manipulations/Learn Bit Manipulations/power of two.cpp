class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(0>=n)
        {
            return false;
        }
      return (n&(n-1))==0;
    }
};