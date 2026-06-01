class TrieNode {
public:
    unordered_map<char, TrieNode*> children;
    bool isWord;

    TrieNode() {
        isWord = false;
    }

    void addWord(const string& word) {
        TrieNode* curr = this;

        for (char c : word) {
            if (!curr->children.count(c)) {
                curr->children[c] = new TrieNode();
            }
            curr = curr->children[c];
        }

        curr->isWord = true;
    }
};

class Solution {
public:
    int ROWS, COLS;
    unordered_set<string> res;
    set<pair<int, int>> visit;

    void dfs(int r, int c,
             vector<vector<char>>& board,
             TrieNode* node,
             string word) {

        if (r < 0 || c < 0 ||
            r >= ROWS || c >= COLS ||
            visit.count({r, c}) ||
            !node->children.count(board[r][c])) {
            return;
        }

        visit.insert({r, c});

        node = node->children[board[r][c]];
        word += board[r][c];

        if (node->isWord) {
            res.insert(word);
        }

        dfs(r - 1, c, board, node, word);
        dfs(r + 1, c, board, node, word);
        dfs(r, c - 1, board, node, word);
        dfs(r, c + 1, board, node, word);

        visit.erase({r, c});
    }

    vector<string> findWords(vector<vector<char>>& board,
                             vector<string>& words) {

        TrieNode* root = new TrieNode();

        for (string& w : words) {
            root->addWord(w);
        }

        ROWS = board.size();
        COLS = board[0].size();

        for (int r = 0; r < ROWS; r++) {
            for (int c = 0; c < COLS; c++) {
                dfs(r, c, board, root, "");
            }
        }

        return vector<string>(res.begin(), res.end());
    }
};