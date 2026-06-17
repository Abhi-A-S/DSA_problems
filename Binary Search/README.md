# Binary Search
https://neetcode.io/problems/binary-search/question?list=neetcode150


## Topics:
Arrays, Binary Search


## Recommended Time & Space Complexity
You should aim for a solution with O(logn) time and O(1) space, where n is the size of the input array. 

## Solutions
### Solution 1: using binary search [optimal approach]
Input: nums = [-1,0,2,4,6,8], target = 4

Output: 3

- take two pointers, upper and lower
- find the middle of the upper and lower index
- check if mid element is key, if it is return mid
- if the mid element is greater than key, then update the upper pointer to mid - 1
- if the mid element is lower than key, then update the lower pointer to mid + 1
- repeat this until the lower pointer becomes greater than the upper pointer

#### Complexity
- Time: $O(\log n)$
- Space: $O(1)$
