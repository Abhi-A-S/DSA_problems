class PairHash
{
public:
    size_t operator()(const pair<int, int>& p) const
    {
        return hash<int>()(p.first) ^
                (hash<int>()(p.second) << 1);
    }
};

class Solution 
{
public:
    bool dfs(int r, int c, int i, string& word, int ROWS, int COLS, 
        vector<vector<char>>& board, 
        unordered_set<pair<int, int>, PairHash>& path)
    {
        if (i == word.size())
            return true;
        
        if (r < 0 || r >= ROWS
            || c < 0 || c >= COLS
            || word[i] != board[r][c]
            || path.find({r, c}) != path.end())
            return false;
        
        path.insert({r, c});
        bool res = (dfs(r + 1, c, i + 1, word, ROWS, COLS, board, path)
                    || dfs(r - 1, c, i + 1, word, ROWS, COLS, board, path)
                    || dfs(r, c + 1, i + 1, word, ROWS, COLS, board, path)
                    || dfs(r, c - 1, i + 1, word, ROWS, COLS, board, path));
        path.erase({r, c});
        return res;
    }

    bool exist(vector<vector<char>>& board, string word) 
    {
        const int ROWS = board.size();
        const int COLS = board[0].size();
        unordered_set<pair<int, int>, PairHash> path;

        for (int r = 0; r < ROWS; r++)
            for (int c = 0; c < COLS; c++)
                if (dfs(r, c, 0, word, ROWS, COLS, board, path))
                    return true;

        return false;
    }
};
