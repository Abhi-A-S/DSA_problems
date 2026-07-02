class Solution {
public:
    vector<int> dp;

    int dfs(int i, string& s) {
        if (dp[i] != -1)
            return dp[i];
        
        if (s[i] == '0')
            return 0;
        
        int res = dfs(i + 1, s);

        if (i + 1 < s.size() && (s[i] == '1'
            || (s[i] == '2' && s[i + 1] <= '6')))
            res += dfs(i + 2, s);

        return dp[i] = res;
    }

    int numDecodings(string s) {
        int n = s.size();
        dp.assign(n+1, -1);
        dp[n] = 1;
        return dfs(0, s);
    }
};
