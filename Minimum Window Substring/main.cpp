class Solution {
public:
    string minWindow(string s, string t) {
        if (t.empty())
            return "";
        
        unordered_map<char, int> countT;
        unordered_map<char, int> window;

        for (char c: t)
            countT[c]++;

        int res[2] = {-1, -1};
        int resLen = INT_MAX;
        int left = 0;
        int have = 0;
        int need = countT.size();
        int n = s.size();

        for (int right = 0; right < n; right++) {
            char c = s[right];
            window[c]++;

            if (countT.count(c) && window[c] == countT[c])
                have++;

            while (have == need) {
                int len = right - left + 1;

                if (len < resLen) {
                    resLen = len;
                    res[0] = left;
                    res[1] = right; 
                }

                window[s[left]]--;

                if (countT.count(s[left]) && window[s[left]] < countT[s[left]])
                    have--;

                left++;
            }
        }
        
        return (resLen == INT_MAX) ? "" : s.substr(res[0], resLen);
    }
};