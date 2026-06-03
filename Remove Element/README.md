# Remove Element
https://neetcode.io/problems/remove-element/question?list=neetcode250

## Topics:
Array, Two Pointers


## Solutions
### Solution 1: using two pointers[optimal]
Input: nums = [3,2,2,3], val = 3

Output: k = 2, nums = [2,2,_,_]

idea:- using two pointers
- initialize two pointers
- i to iterate over the array
- k to keep track of numebers that are not val
- if nums[i] != val, swap ith and kth elements and increment i and k
- else increment i

#### Complexity
- Time: $O(n)$
- Space: $O(m)$