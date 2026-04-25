# Longest Substring Without Repeating Characters
neetcode.io/problems/longest-substring-without-duplicates/question?list=blind75

## Topics:
String, Hash Tables, Sliding Window

## Recommended Time & Space Complexity

You should aim for a solution with O(n) time and O(m) space, where n is the length of the string and m is the number of unique characters in the string. 


## Solutions
### Solution 1: using sliding window [optimal]
Input: s = "abcabcbb"
output: 3

- iterate from the beginnig of the string
- check if the character is unique
- if so add it to the window and set of unique characters
- continue until we find a duplicate
- once a duplicate is found, remove till the first occurance of it from the window, and the character set
- continue this until you reach the end of the 

#### Complexity
- Time: $O(n)$
- Space: $O(m)$