# Valid Anagram

https://neetcode.io/problems/is-anagram/question?list=blind75

## Topics:
Arrays, Two Pointers, Dynamic Programming, Stack, Monotonic Stack

## Recommended Time & Space Complexity

You should aim for a solution as good or better than O(n) time and O(n) space, where n is the size of the input array. 

## Solutions
### Solution 1: using two pointers [optimal]
ex:- height = [0,2,0,3,1,0,1,3,2,1]

idea:- same as container with most water, but we also need to substract the current height

- find the maximum heights for left and right that will act as a container
- water will be at the level of the minimum
- so min(maxRight, maxLeft) will be water level
- find the total possible rain water that can be held
- substract each coming heights from that 


#### Complexity
- Time: $O(n)$
- Space: $O(1)$