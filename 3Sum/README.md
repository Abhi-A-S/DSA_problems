# Concatenation of Array
https://neetcode.io/problems/three-integer-sum/question?list=blind75

## Topics:
Arrays, Two Pointers, Sorting

# Recommended Time & Space Complexity

You should aim for a solution with O(n^2) time and O(1) space, where n is the size of the input array.

## Solutions
### Solution 1: using two pointers [optimal]
ex:- [-3, 3, 4 , -3, 1, 2] => [[-3, 1, 2]]

- sort the input array
- [-3, 3, 4, -3, 1, 2] => [-3, -3, 1, 2, 3, 4]
- take the first element
- now it becomes 2 sum problem, where the goal is to get 0
- use two pointers, one at next position, one at the end
- if the sum of the two pointer elements is more than element, decrement the last pointer
- if the sum of the two pointer elements is less than element, increment the first pointer

#### Complexity
- Time: $O(n^2)$
- Space: $O(1)$