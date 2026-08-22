class Solution 
{
public:
    bool canSplit(int largest, vector<int>& nums, int k) 
    {
        int subarray = 1;
        int currSum = 0;

        for (int n : nums)
        {
            if (currSum + n > largest)
            {
                subarray++;
                currSum = n;
            }
            else
                currSum += n;
        }

        return subarray <= k;
    }

    int splitArray(vector<int>& nums, int k) 
    {
        int l = *max_element(nums.begin(), nums.end());
        int r = accumulate(nums.begin(), nums.end(), 0);
        int res = r;

        while (l <= r)
        {
            int mid = l + (r - l) / 2;

            if (canSplit(mid, nums, k))
            {
                res = mid;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }

        return res;
    }
};