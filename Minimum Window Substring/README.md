# Minimum Window Substring
https://neetcode.io/problems/minimum-window-with-characters/question?list=blind75

## Topics:
String, Hash Tables, Sliding Window

## Recommended Time & Space Complexity

You should aim for a solution with O(n) time and O(m) space, where n is the length of the string s and m is the number of unique characters in s and t. 


## Solutions
### Solution 1: using hash map with sliding window [optimal]
Input: S = "ADOBECODEBANC" t = "ABC"
output: "BANC"

- use two hash map to hold the counts of characters for both the sliding window and the needed characters
- iterate over the string s using a sliding window
- add the character to the hash map for count
- check if the window's hashmap count is the same for the required for the first character
- if so find go to checking the counts of the next character
- do this until you get a substring that satisfies the requirement
- now decrease the window size until it doesn't satisfy, and then repeat the same process again
- do this until the end, this way you find the smallest window that satisfies t in s 

#### Complexity
- Time: $O(n)$
- Space: $O(m)$