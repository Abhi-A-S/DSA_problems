# Merge Intervals
https://neetcode.io/problems/merge-intervals/question?list=blind75

## Topics
Array, Sorting

## Recommended Time & Space Complexity
You should aim for a solution as good or better than O(nlogn) time and O(n) space, where n is the size of the input array.

## Solutions
### Solution 1: sorting the intervals [optimal]
Input: intervals = [[1,3],[1,5],[6,7]]

Output: [[1,5],[6,7]]

- since the intervals are merged if i1[end] >= i2[start], for any two intervals i1 and i2
- first we sort the intervals on the basis of the start of every interval
- iterate over the intervals
- compare the end of the current interval and start of the next interval
- if i1[end] >= i2[start], merge the intervals else skip them


#### Complexity
- Time: $O(n)$
- Space: $O(1)$