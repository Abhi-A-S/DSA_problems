class Solution 
{
public:
    bool isAnagram(string s, string t) 
    {
        if (s.size() != t.size())
            return false;
        int character_counts[26] {}; // store count of 26 letters

        // character indexing using ascii representation of strings
        for (char i: s)
            character_counts[i - 'a']++;
        for (char i: t)
            character_counts[i - 'a']--;

        for (int i: character_counts)
            if (i != 0)
                return false;
        
        return true;
    }
};
