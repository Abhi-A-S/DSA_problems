# House Robber
https://neetcode.io/problems/house-robber/question?list=blind75

## Topics
Array, Dynamic Programming

## Recommended Time & Space Complexity
You should aim for a solution as good or better than O(n) time and O(n) space, where n is the number of houses. 

## Solutions
### Solution 1: using DP [optimal]
Input: nums = [2,9,8,3,6]

Output: 16

- let us start with robbing house[0]
- then to maximize robbing, we will need to find the next house to rob from index 2
- hence the recurrance relationship becomes
- $rob = max(house[0] + rob(2..n), rob(1..n))$
- which is then the dynamic programming equation

#### Complexity
- Time: $O(n)$
- Space: $O(n)$