# Find Minimum in Rotated Sorted Array
https://neetcode.io/problems/find-minimum-in-rotated-sorted-array/question?list=blind75


## Topics:
Arrays, Binary Search


## Recommended Time & Space Complexity
You should aim for a solution with O(logn) time and O(1) space, where n is the size of the input array. 

## Solutions
### Solution 1: using [optimal approach]
ex:- [3, 4, 5, 1, 2]

- take two pointers of binary search
- one at the first, one at the end
- find the middle point
- check if the middle point is in rotated part, ie [3, 4, 5]... if nums[mid] >= nums[first]
- if it is then update first = mid+1
- else if it is in the normal part, ie [1, 2]
-  then update end = mid - 1

#### Complexity
- Time: $O(\log n)$
- Space: $O(1)$
