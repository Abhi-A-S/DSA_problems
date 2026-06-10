class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int res;

        for (int i: nums)
        {
            if (count == 0)
                res = i;
            
            if (i == res)
                count++;
            else
                count--;
        }

        return res;
    }
};