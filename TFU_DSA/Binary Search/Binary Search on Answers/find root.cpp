class Solution {
public:
    long long floorSqrt(long long n)  {
      long long low =0,high =n,mid;
      long long ans=0;

      while(low<=high)
      {
        mid = (low+high)/2;
        if (mid*mid==n)
        {
            return mid;
        }
        else if(mid*mid <n)
        {
            low = mid+1;
            ans= mid;
        }
        else
        {
            high=mid-1;
        }
      }
      return ans;
    }
};