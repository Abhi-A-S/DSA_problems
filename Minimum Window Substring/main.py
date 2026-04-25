class Solution:
    def minWindow(self, s: str, t: str) -> str:
        if t == "":
            return ""
        
        countT = {}
        window = {}
        res = [-1, -1]
        resLen = float("inf")
        left = 0

        for char in t:
            countT[char] = 1 + countT.get(char, 0)

        have = 0
        need = len(countT)

        for right in range(len(s)):
            char = s[right]
            window[char] = 1 + window.get(char, 0)

            if window[char] == countT.get(char, 0):
                have += 1
            
            while have == need:
                length = right - left + 1

                if length < resLen:
                    res = [left, right]
                    resLen = length

                window[s[left]] -= 1

                if window[s[left]] < countT.get(s[left], 0):
                    have -= 1
                
                left += 1

        left, right = res

        return s[left: right + 1] if resLen != float('inf') else ""