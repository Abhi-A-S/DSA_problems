class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        
        ParenthesesMap = {'}': '{', ']': '[', ')': '('}
        
        for char in s:
            if char in ParenthesesMap:
                if stack and stack[-1] == ParenthesesMap[char]:
                    stack.pop()
                else:
                    return False
            else:
                stack.append(char)

        return not stack