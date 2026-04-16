class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        res = {}

        for s in strs:
            counts = [0] * 26
            for letter in s:
                counts[ord(letter) - ord('a')] += 1
            counts = tuple(counts)
            res[counts] = [s] + res.get(counts, [])
        
        return list(res.values())