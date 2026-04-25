# Longest Repeating Character Replacement
neetcode.io/problems/longest-substring-without-duplicates/question?list=blind75

## Topics:
String, Hash Tables, Sliding Window

## Recommended Time & Space Complexity

You should aim for a solution with O(n) time and O(m) space, where n is the length of the given string and m is the number of unique characters in the string. 


## Solutions
### Solution 1: using hash map with sliding window [optimal]
Input: s = "ababba" k = 2
output: 3

- create a sliding window using right and left pointers
- while iterating over the string with the sliding window
- create a hash map to store the number of occurances of a character in the array
- check for the character with max number of occurances
- do this until the number of unique characters are less than K
- if there are more, increment the start of the sliding window
- do this until the end is reached

#### Complexity
- Time: $O(n)$
- Space: $O(m)$