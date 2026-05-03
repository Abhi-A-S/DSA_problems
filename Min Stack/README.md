# Min Stack

https://neetcode.io/problems/minimum-stack/question?list=neetcode150

## Topics:
Stack, Design

## Recommended Time & Space Complexity

You should aim for a solution with O(1) time for each function call and O(n) space, where n is the maximum number of elements present in the stack. 

## Solutions
### Solution 1: using another stack for holding min values [optimal]
ex:- [-2, 0, -3]

- initialize another stack for holding the minimum to that point
- when an element is inserted, check if its the minimum value so far
- if it is, update that to the new minimum value at the top
- else use the same minimum value


#### Complexity
- Time: $O(1)$
- Space: $O(n)$