# Meeting Rooms II
https://neetcode.io/problems/meeting-schedule-ii/question?list=blind75

## Topics
Array, Two Pointers, Greedy, Sorting, Heap (Priority Queue), Prefix Sum

## Recommended Time & Space Complexity
You should aim for a solution with O(nlogn) time and O(n) space, where n is the size of the input array.

## Solutions
### Solution 1: sorting the intervals [optimal]
Input: intervals = [(0,40),(5,10),(15,20)]

Output: 2

Explanation:
room1: (0,40)
room2: (5,10),(15,20)


- to find the minimum number of rooms needed, it will be equal to the maximum number of meetings happening at once and a max counts varible
- hence we need to find the number of overlapping meetings at a given time
- we take a counting varible to hold the number of meetings happeining at a given time
- we take the two arrays, one to hold all the start times and another to hold all the end times
- we then use two pointer technique to iterate over the two of them and find teh number of overlaps
- pointer i for start times, pointer j for end times
- compare i and j values, if starts[i] < end[j], increment count and check its the maximum
- else 
- continue until the start times are exhausted
- return the max of counts


#### Complexity
- Time: $O(n \log n)$
- Space: $O(n)$