# Longest Palindromic Substring
https://neetcode.io/problems/longest-palindromic-substring/question?list=blind75

## Topics
Two Pointers, String, Dynamic Programming

## Recommended Time & Space Complexity
You should aim for a solution as good or better than O(n^2) time and O(1) space, where n is the length of the given string. 

## Solutions
### Solution 1: using DP [optimal]
Input: s = "ababd"

Output: "bab"

Explanation: Both "aba" and "bab" are valid answers.

- since palindromes are same from the start and the end
- we can take a character as a center and expand outward to its neighbouring elements
- we do this until the substring remains a palindrome
- this way we can get the left and right most pointers to the largest substring that is a palindrome
- this approach works for the case where there are odd number of elements in a substring
- for even, we check the neighbour to see if they are same
- if they are we repeat the same procedure as above

#### Complexity
- Time: $O(n)$
- Space: $O(n)$