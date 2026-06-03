# Longest Common Prefix
https://neetcode.io/problems/longest-common-prefix/question


## Topics:
Array, String, Trie

## Solutions
### Solution : using prefix list [optimal]
Input: strs = ["bat","bag","bank","band"]

Output: "ba"

idea:- using prefix list
- iterate over the words in the list
- iterate over the characters in the word
- check if the letters are common
- if its not common, go to next 
- once all the words are done return the characters that were common

#### Complexity
- Time: $O(k * n)$ where k is length of string and n is number of strings
- Space: $O(n)$
