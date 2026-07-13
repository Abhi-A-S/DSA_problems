# Meeting Rooms
https://neetcode.io/problems/meeting-schedule/question?list=blind75

## Topics
Array, Sorting

## Recommended Time & Space Complexity
You should aim for a solution with O(nlogn) time and O(n) space, where n is the size of the input array. 

## Solutions
### Solution 1: sorting the intervals [optimal]
Example 1:

Input: intervals = [(0,30),(5,10),(15,20)]

Output: false

Explanation:

    (0,30) and (5,10) will conflict
    (0,30) and (15,20) will conflict


- for a meeting to have a conflict, the start time of a meeting must come in between the start and end of another interval
- sort the intervals based on the starting time
- iterate over the intervals
- if for an interval i, i[second] > i+1[first], return false
- else if no itervals overlap, return true


#### Complexity
- Time: $O(n \log n)$
- Space: $O(n)$