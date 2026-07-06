# Score of a String
https://neetcode.io/problems/score-of-a-string/question?list=allNC

## Topics:
String

## Solutions
### Solution 1: using two pointers [optimal]
Input: s = "code"

Output: 24

Explanation: The ASCII values of the characters in the given string are: 'c' = 99, 'o' = 111, 'd' = 100, and 'e' = 101. The score of s will be: |111 - 99| + |100 - 111| + |101 - 100|.

- iterate over the string 
- take two adjcent characters and find the absolute differnce between the two
- add them up using a result variable

#### Complexity
- Time: $O(n)$
- Space: $O(1)$