# Find Minimum in Rotated Sorted Array
https://neetcode.io/problems/find-target-in-rotated-sorted-array/question?list=blind75


## Topics:
Arrays, Binary Search


## Recommended Time & Space Complexity
You should aim for a solution with O(logn) time and O(1) space, where n is the size of the input array. 

## Solutions
### Solution 1: using [optimal approach]
ex:- [4, 5, 6, 7, 0, 1, 2], target = 0

- take two pointers left and right
- find middle pointer
- check if the middle is in the rotated part or not, ie nums[left] <= nums[mid]
- if so then check , ie if nums[mid] < target or nums[left] > target then left = mid + 1
- otherwise right = mid - 1
- if its not in the rotated part
- if so then update the left pointer accordingly, ie nums[mid] > target or nums[left] > nums[right] then right = mid - 1
- otherwise left = mid + 1

#### Complexity
- Time: $O(\log n)$
- Space: $O(1)$
