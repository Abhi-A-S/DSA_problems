# Group Anagrams
https://neetcode.io/problems/anagram-groups/question?list=blind75

## Topics:
Array, String, Hash Tables, Sorting

## Recommended Time & Space Complexity

You should aim for a solution with O(m * n) time and O(m) space, where m is the number of strings and n is the length of the longest string. 


## Solutions
### Solution 1: using hash map [optimal]
Input: strs = ["act","pots","tops","cat","stop","hat"]

Output: [["hat"],["act", "cat"],["stop", "pots", "tops"]]

idea:- count the number of occurances of each letter, if they are same
- find the counts of each letter for the strings
- using maps group the ones with same letter counts

#### Complexity
- Time: $O(n * m)$
- Space: $O(m)$