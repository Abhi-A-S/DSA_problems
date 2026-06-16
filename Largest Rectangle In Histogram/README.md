# Largest Rectangle In Histogram
https://neetcode.io/problems/largest-rectangle-in-histogram/question?list=neetcode150

## Topics:
Array, Stack, Monotonic Stack

## Recommended Time & Space Complexity

You should aim for a solution with O(n) time and O(n) space, where n is the size of the input array. 

## Solutions
### Solution 1: stacking the heights in ascending order [optimal]
Input: heights = [7,1,7,2,2,4]

Output: 8

- start with the first index and add it to the stack
- go to the next element and check if it is greater than or equal to the element in stack
- if it is then add it to the stack and index it based on the last number lower than it
- if not, find the area, calculated as, index difference b/w the lower element and index of the top of stack multiplied with the height of the top element
- if its the highest area, update it as the maximum, pop the top of the stack and check with the next top element
- repeat over the histogram until the stack is empty and all the histogram elements are traversed


#### Complexity
- Time: $O(n)$
- Space: $O(n)$