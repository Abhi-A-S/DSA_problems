class Solution 
{
public:
    int scoreOfString(string s) 
    {
        int res = 0;
        int n = s.size() - 1;

        for (int i = 0; i < n;)
            res += abs(s[i] - s[++i]);

        return res;
    }
};