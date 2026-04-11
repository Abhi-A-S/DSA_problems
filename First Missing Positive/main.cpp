class Solution 
{
public:
    int firstMissingPositive(vector<int>& nums) 
    {
        int n = nums.size();
        int i {}, val {};
        for (i = 0; i < n; i++)
            if (nums[i] < 0)
                nums[i] = 0;

        for (i = 0; i < n; i++) 
        {
            val = abs(nums[i]) - 1;
            if (0 <= val && val < n)
                if (nums[val] > 0)
                    nums[val] *= -1;
                else if (nums[val] == 0)
                    nums[val] = -(n + 1);
        }

        for (i = 0; i < n;i++)
            if (nums[i] >= 0)
                return i+1;
        
        return n + 1;
    }
};