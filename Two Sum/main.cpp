class Solution 
{
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int, int> prev_map;
        int n = nums.size();

        for (int i = 0; i < n; i++) 
        {
            int diff = target - nums[i];

            if (prev_map.find(diff) != prev_map.end())
                return {prev_map[diff], i};

            prev_map[nums[i]] = i;
        }

        return {};
    }
};