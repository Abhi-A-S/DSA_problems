# Longest Consecutive Sequence
https://neetcode.io/problems/longest-consecutive-sequence/question?list=blind75

## Topics:
Array, Hash Tables, Union Find

## Recommended Time & Space Complexity

You should aim for a solution as good or better than O(n) time and O(n) space, where n is the size of the input array. 


## Solutions
### Solution 1: sorting the array
Input: strs = [100, 4, 200, 1, 3, 2]

Output: 4 (ie [1, 2, 3, 4])

idea:- sort the series to find consecutive numbers
- start with the first element
- increment length until the next element is 1 more than the current
- else using it as a start and repeat

#### Complexity
- Time: $O(n\log n)$
- Space: $O(1)$

### Solution 1: using hash set [optimal]
idea:- using hash set check if n-1 exists in the it, if not use that as the start

- convert array to set
- start iterating over the set
- let the element be n
- if n-1 exists in the set then it is not the start
- if n-1 doesnt exist, keep incrementing until there's no n+1 number in set
- count the number of increments, ie this is the length of the sequence
- continue until all numbers are iterated over
- one of them is the largest


#### Complexity
- Time: $O(n)$
- Space: $O(n)$