
class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int largest=-1,secondlargest=-1;
        for(auto x:nums)
        {
            if(x>largest)
            {
                secondlargest=largest;
                largest= x;
            }
            else if(x<largest && x>secondlargest)
            {
                secondlargest=x;
            }
        }
        return secondlargest;
      
    }
};