class Solution 
{
public:
    bool isValidSudoku(vector<vector<char>>& board) 
    {
        vector<int> rows(9, 0), cols (9, 0), boxes(9, 0);
        
        for (int row = 0; row < 9; row++) 
        {
            for (int col = 0; col < 9; col++) 
            {
                if (board[row][col] == '.') continue;

                int num = board[row][col] - '0';
                int mask = 1 << (num - 1);

                int box = (row / 3) * 3 + col / 3;

                if ((rows[row] & mask)
                    || (cols[col] & mask)
                    || (boxes[box] & mask))
                    return false;

                rows[row] |= mask;
                cols[col] |= mask;
                boxes[box] |= mask;
            }
        }
        
        return true;
    }
};
