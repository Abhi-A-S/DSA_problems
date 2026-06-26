# Climbing Stairs
https://neetcode.io/problems/climbing-stairs/question?list=blind75

## Topics
Math, Dynamic Programming, Memoization

## Recommended Time & Space Complexity
You should aim for a solution as good or better than O(n) time and O(n) space, where n is the number of steps. 

## Solutions
### Solution 1: using DP [optimal]
Input: n = 3

Output: 3

Explanation:

1 + 1 + 1 = 3

1 + 2 = 3

2 + 1 = 3


- we start with the last step
- assign it as 1
- go to the one below, and it is also 1
- now for the ones below, it is the same as the sum of the next 2 terms (reversed fibonacci)
- so the number of ways is equal to the n-1 th fibonacci number

#### Complexity
- Time: $O(n)$
- Space: $O(1)$