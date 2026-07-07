class Solution 
{
public:
    int maxProduct(vector<int>& nums) 
    {
        int res = *max_element(nums.begin(), nums.end());

        int currMin = 1;
        int currMax = 1;
        int tempMax;

        for (int n: nums)
        {
            tempMax = currMax * n;
            currMax = max({n * currMax, n * currMin, n});
            currMin = min({tempMax, n * currMin, n});

            res = max({res, currMax, currMin});
        }

        return res;
    }
};
