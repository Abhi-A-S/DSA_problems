class Solution 
{
public:
    void dfs(int i, vector<int>& curr, int total, vector<vector<int>>& res, vector<int>& nums, int target)
    {
        if (total == target)
        {
            res.push_back(curr);
            return;
        }

        else if (i >= nums.size() || total > target)
            return;

        curr.push_back(nums[i]);
        dfs(i, curr, total + nums[i], res, nums, target);

        curr.pop_back();
        dfs(i + 1, curr, total, res, nums, target);
    }
    
    vector<vector<int>> combinationSum(vector<int>& nums, int target) 
    {
        vector<vector<int>> res;
        vector<int> curr;

        dfs(0, curr, 0, res, nums, target);
        return res;
    }
};
