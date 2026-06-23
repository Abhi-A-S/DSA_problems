class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1)
            return nums[0];

        return max(helper(nums, 0, n-2), helper(nums, 1, n-1));     
    }

    int helper(vector<int>& nums, int l, int r)
    {
        int rob1 = 0;
        int rob2 = 0;

        for (int n = l; n <= r; n++)
        {
            int newRob = max(rob1 + nums[n], rob2);
            rob1 = rob2;
            rob2 = newRob;
        }

        return rob2;
    }
};
