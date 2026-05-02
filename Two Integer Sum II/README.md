# Two Integer Sum II
https://neetcode.io/problems/two-integer-sum-ii/question?list=neetcode150

## Topics:
Arrays, Two Pointers, Binary Search

# Recommended Time & Space Complexity

You should aim for a solution with O(n) time and O(1) space, where n is the size of the input array. 

## Solutions
### Solution 1: using two pointers [optimal]
ex:- [1, 3, 4, 5, 7, 10, 11],  target = 9

- since the array is sorted we can use this to our advantage using two pointers
- one pointer is set to the first element
- second poiter is set to the last element
- find the sum of the elements in the poiters
- if the sum is larger than the target, decrement the second pointer
- if the sum if smaller than the target, increment the first pointer
- the sum is equal to the target, return the first and second pointers as solutions

#### Complexity
- Time: $O(n)$
- Space: $O(1)$