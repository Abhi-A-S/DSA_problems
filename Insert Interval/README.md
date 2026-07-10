# Longest Increasing Subsequence
https://neetcode.io/problems/insert-new-interval/question?list=blind75

## Topics
Array

## Recommended Time & Space Complexity
You should aim for a solution with O(n) time and O(1) extra space, where n is the size of the input array. 

## Solutions
### Solution 1: iterating over the intervals in order [optimal]
Input: intervals = [[1,3],[4,6]], newInterval = [2,5]

Output: [[1,6]]

Explanation: [2,5] overlaps with [1,3] and [4,6], so all three are merged into [1,6].

- iterating over the given intervals, we find the position at which the new interval must be placed by comparing the first_i of intervals and new_interval
- we then check if the interval from the previous overlaps, ie interval[second_i] >= new_interval[first_i]
- this will remake the interval into [interval[first_i], new_interval[second_i]], ie they have been merged
- similiarly we find the next interval and if it can overlap
- interval[first_i] <= new_interval[second_i]
- this will create a new interval for [new_interval[second_i], interval[first_i]]


#### Complexity
- Time: $O(n)$
- Space: $O(1)$