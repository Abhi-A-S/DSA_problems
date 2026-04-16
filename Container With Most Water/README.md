# Container With Most Water
https://neetcode.io/problems/max-water-container/question?list=blind75

## Topics:
Arrays, Two Pointers, Greedy

# Recommended Time & Space Complexity

You should aim for a solution with O(n^2) time and O(1) space, where n is the size of the input array.

## Solutions
### Solution 1: brute force
ex:- [1, 8, 6, 2, 5, 4, 8, 3, 7]

- use two loops to represent the left and right container heights
- find the amount of water it stores
- do this for all the combinations 
- return the max of the water stored

#### Complexity
- Time: $O(n^2)$
- Space: $O(1)$

### Solution 1: uusing two pointers [optimal]
ex:- [1, 8, 6, 2, 5, 4, 8, 3, 7]

- assign left pointer to the beginning of array
- assign right pointer to the end of array
- find the amount of water stored
- if left pointer value is smaller than the right one, increment the left
- else if left pointer value is larger than the right one, decrement the right
- if both are the same, we decide based on what value comes next or before the pointers, ie shifting to whatever one is bigger

#### Complexity
- Time: $O(n)$
- Space: $O(1)$
