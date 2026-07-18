# Non-overlapping Intervals
https://neetcode.io/problems/non-overlapping-intervals/question?list=blind75

## Topics
Array, Dynamic Programming, Greedy, Sorting

## Recommended Time & Space Complexity
You should aim for a solution with O(nlogn) time and O(n) space, where n is the size of the input array. 

## Solutions
### Solution 1: sorting the intervals [optimal]
Input: intervals = [[1,2],[2,4],[1,4]]

Output: 1

Explanation: After [1,4] is removed, the rest of the intervals are non-overlapping.

- since the intervals overlap if the lower limit of one interval is in between another's limits
- we first sort the intervals so that we can iterate over them in order
- we check for the intervals that are overlapping
- if they are overlapping, we remove the one that starts early and ends late, ie interval that take the most space
- and then check if the intervals are overlapping or not
- we do this by tracking the end point of each interval and then use it to compare witht the ones coming next
- for all intervals that are not overlapping we update the end point


#### Complexity
- Time: $O(n \log n)$
- Space: $O(n)$