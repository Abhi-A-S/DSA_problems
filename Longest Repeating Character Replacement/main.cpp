class Solution 
{
public:
    int characterReplacement(string s, int k) 
    {
        unordered_map<char, int> mp;
        int res {}, count {};
        int n = s.size();

        for (int i = 0; i < n; i++) 
        {
            count = max(count, ++mp[s[i]]);

            if (res - count < k)
                res++;
            else
                mp[s[i - res]]--;
        }
        return res;
    }
};
