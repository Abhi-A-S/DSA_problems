# Decode Ways
https://neetcode.io/problems/decode-ways/question?list=blind75

## Topics
String, Dynamic Programming

## Recommended Time & Space Complexity
You should aim for a solution as good or better than O(n) time and O(n) space, where n is the length of the given string. 

## Solutions
### Solution 1: using DP [optimal]
Input: s = "12"

Output: 2

Explanation: "12" could be decoded as "AB" (1 2) or "L" (12).

- check if the string starts with 0, if it is then return 0 since it is not valid
- iterate over the string
- take the first character and map it
- go to the next character, check if its in between 1-26
- if it is, increment no. of ways and go to next character
- we keep repeating this process where we take 1 digit, increment no. of ways
- go to the next digit, are below 26, if not that is skipped

- so for using dp, we choose the sub problem as the number of ways the next coming characters can be decoded
- so for 4 digits abcd, bcd is the sub problem, then cd is the sub problem, then d becoming the last subproblem

#### Complexity
- Time: $O(n^3)$
- Space: $O(n)$