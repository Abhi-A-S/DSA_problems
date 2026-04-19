# Valid Anagram

https://neetcode.io/problems/is-palindrome/question?list=blind75

## Topics:
Two Pointers, String

## Recommended Time & Space Complexity

You should aim for a solution with O(n) time and O(1) space, where n is the length of the input string. 

## Solutions
### Solution 1: using two pointers [optimal]
ex:- s = "A man, a plan, a canal: Panama"

idea:- use two pointers
- use the left for begnning, use the right for the end
- if the character at those positions are not alpha numeric, increment right / decrement left
- check if the characters are the same, if not return false
- continue until left <= right

#### Complexity
- Time: $O(n)$
- Space: $O(1)$