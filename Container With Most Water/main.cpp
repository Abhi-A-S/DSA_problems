class Solution 
{
public:
    int maxArea(vector<int>& heights) 
    {
        int res = 0;
        int left = 0;
        int right = heights.size() - 1;
        int area {};

        while (left < right) 
        {
            area = (right - left) * min(heights[left], heights[right]);
            res = max(res, area);

            if (heights[left] < heights[right])
                left++;
            else
                right--;
        }

        return res;
    }
};
