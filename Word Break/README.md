# Word Break
https://neetcode.io/problems/word-break/question?list=blind75

## Topics
Array, Hash Table, String, Dynamic Programming, Trie, Memoization

## Recommended Time & Space Complexity
You should aim for a solution as good or better than O(n * m * t) time and O(n) space, where n is the length of the string s, m is the number of words in wordDict, and t is the maximum length of any word in wordDict. 

## Solutions
### Solution 1: using DP [optimal]
Input: s = "neetcode", wordDict = ["neet","code"]

Output: true

Explanation: Return true because "neetcode" can be split into "neet" and "code".

- instead of processing each character in the input string, we process them one word at a time
- this helps reduce the time complexity
- we iterate over the given string using a kind of pointer approach
- where imagine we are pointing to the charcter in the string and it is used to compare with the letters of the words in the given dictionary
- compare for every word in the dictionary
- if a match is found, it means that that section is solvable, and we can skip to the character coming after the length of the matching word
- using dynamic programming, we can take each section in this as a sub problem to be solved using memorization

- using a bottom's up approach, we start at the last position
- check if its matching the charcters of the word dictionary
- check them each letter at a time based on the length
- we make our way to the starting of the string
- the final dp[0] value is the result, as if it doesn't match then there's no dictionary word for it


#### Complexity
- Time: $O(n m t)$
- Space: $O(n)$