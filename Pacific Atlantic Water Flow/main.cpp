struct PairHash 
{
    size_t operator()(const pair<int, int>& p) const 
    {
        return hash<int>()(p.first) ^ (hash<int>()(p.second) << 1);
    }
};

class Solution 
{
public:
    int ROWS;
    int COLS;

    void dfs(int r, int c, unordered_set<pair<int,int>, PairHash>& visited, 
             int prevHeight, vector<vector<int>>& heights)
    {
        if (r < 0 || r >= ROWS
            || c < 0 || c >= COLS
            || visited.find({r,c}) != visited.end() 
            || heights[r][c] < prevHeight)
            return;

        visited.insert({r,c});

        dfs(r + 1, c, visited, heights[r][c], heights);
        dfs(r - 1, c, visited, heights[r][c], heights);
        dfs(r, c + 1, visited, heights[r][c], heights);
        dfs(r, c - 1, visited, heights[r][c], heights);
    }

    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) 
    {
        ROWS = heights.size();
        COLS = heights[0].size();

        unordered_set<pair<int, int>, PairHash> pac;
        unordered_set<pair<int, int>, PairHash> atl;

        for (int c = 0; c < COLS; c++)
        {
            dfs(0, c, pac, heights[0][c], heights);
            dfs(ROWS - 1, c, atl, heights[ROWS - 1][c], heights);
        }

        for (int r = 0; r < ROWS; r++)
        {
            dfs(r, 0, pac, heights[r][0], heights);
            dfs(r, COLS - 1, atl, heights[r][COLS - 1], heights);
        }

        vector<vector<int>> res;
        for (int r = 0; r < ROWS; r++)
            for(int c = 0; c < COLS; c++)
                if (pac.find({r, c}) != pac.end() 
                    && atl.find({r, c}) != atl.end())
                    res.push_back({r, c});

        return res;
    }
};
