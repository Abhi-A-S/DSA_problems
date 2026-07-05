# Is Subsequence
https://neetcode.io/problems/is-subsequence/question?list=allNC

## Topics:
Two Pointers, String, Dynamic Programming

## Solutions
### Solution 1: using two pointers [optimal]
Input: s = "node", t = "neetcode"

Output: true

idea:- using two pointers to iterate over the items in the two strings
- create a pointer i to iterate over s
- create a pointer j to iterate over t
- check if ith character in s and jth character in t are equal
- if they are both equal, increment i and j
- if they are not equal, increment j
- repeat the above two steps until, j > lenth(t) or i > length(s)
- if i goes over s, then its a subsequence
- if j goes over t, thenn it is not a sub sequence

#### Complexity
- Time: $O(n)$
- Space: $O(1)$