class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int maxArea = 0;
        vector<pair<int, int>> stk;

        for (int i = 0; i < heights.size(); i++)
        {
            int h = heights[i];
            int start = i;

            while (!stk.empty() && stk.back().second > h)
            {
                auto [index, height] = stk.back();
                stk.pop_back();

                maxArea = max(maxArea, height * (i - index));

                start = index;
            }

            stk.push_back({start, h});
        }

        for (auto& [i, h]: stk)
            maxArea = max(maxArea, h * ((int) heights.size() - i));

        return maxArea;
    }
};
