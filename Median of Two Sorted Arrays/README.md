# Median of Two Sorted Arrays
https://neetcode.io/problems/median-of-two-sorted-arrays/question?list=neetcode150


## Topics:
Arrays, Binary Search, Divide and Conquer


## Recommended Time & Space Complexity
You should aim for a solution with O(log(min(n, m))) time and O(1) space, where n is the size of nums1 and m is the size of nums2. x    

## Solutions
### Solution 1: using binary search [optimal approach]
ex:- [4, 5, 6, 7, 0, 1, 2], target = 0

Input: nums1 = [1,3], nums2 = [2,4]

Output: 2.5

Explanation: Among [1, 2, 3, 4] the median is (2 + 3) / 2 = 2.5.

- when we combine the nums arrays, the median will be in the middle. to do this we need to split it into two parts
- so using binary searach we
- start by finding the middle elements of nums1 and nums2
- this is how we start to split them into the left and right partition
- to seperate them into the left partition
- we check if the two middle elements are equal
- if not we repeat the binary search process for the element with the lower value
- we then reduce the middle value to the difference between the old middle and the new middle
- keep repeating until the left partition is satisfied, return teh next element
- for the case of even number of elements
- we take the maximum of the left partition and the minimum of the right partition

#### Complexity
- Time: $O(\log (m + n))$
- Space: $O(1)$
