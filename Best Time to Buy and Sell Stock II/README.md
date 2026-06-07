# Best Time to Buy and Sell Stock II
https://neetcode.io/problems/best-time-to-buy-and-sell-stock-ii/question?list=neetcode250

## Topics:
Array, Dynamic Programming, Greedy

## Solutions
### Solution 1: using using dynamic programming [optimal]
idea:- using dynamic programming for buying low and selling high

- iterate over the array and find the point where the array is incresing or decreasing
- if the next array value is decreasing then sell the goal
- else if the next value is incresing buy / hold

#### Complexity
- Time: $O(n)$
- Space: $O(n)$