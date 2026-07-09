# Longest Increasing Subsequence
https://neetcode.io/problems/longest-increasing-subsequence/question?list=blind75

## Topics
Array, Binary Search, Dynamic Programming

## Recommended Time & Space Complexity
You should aim for a solution as good or better than O(n ^ 2) time and O(n ^ 2) space, where n is the size of the input array. 

## Solutions
### Solution 1: using DP [optimal]
Input: nums = [9,1,4,2,3,3,7]

Output: 4

Explanation: The longest increasing subsequence is [1,2,3,7], which has a length of 4.

main idea: as the Longest Incresing subsequence depends on what comes next, we can do bottom up approach from the end
- start from the end, and assign the end as 1
- go to the previous element, and compare it to the next element
- if the element is lower, then it will become part of the LIS, so we will increment to the maximum dp value so far
- if it is higher, we find the next values that it is lower than
- if it is equal, we can ignore it and give it the same dp value
- so the dp formula will become dp[i] = max(1, 1 + dp[i+1], 1 + dp[i+2], 1 + dp[i+3], ... , 1+ dp[i+4]) for all dp[i+x] > dp[i]


#### Complexity
- Time: $O(n^2)$
- Space: $O(n)$