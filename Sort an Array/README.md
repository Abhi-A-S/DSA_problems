# Sort an Array
https://neetcode.io/problems/sort-an-array/question?list=neetcode250

## Topics:
Array, Divide and Conquer, Sorting, Heap (Priority Queue), Merge Sort, Bucket Sort, Radix Sort, Counting Sort

## Recommended Time & Space Complexity

You must solve the problem without using any built-in functions in O(nlog(n)) time complexity and with the smallest space complexity possible. 


## Solutions
### Solution 1: using merge sort [optimal]
Input: nums = [10,9,1,1,1,2,3,1]
Output: [1,1,1,1,2,3,9,10]

splitting array:
- create a middle pointer
- split the array into two parts, one till the middle, and one from the middle

merging sub arrays:
- create two pointer for holding the first two elements of the sub array
- create an auxilary storage space, and a index value to hold the array elements
- compare the elements at the two pointers
- pick the one with least element value and add it to the auxilary array
- increment that pointers
- do this until one of the subarray is empty
- then copy the rest of the subarray elements into the auxilary elements

#### Complexity
- Time: $O(n \log n)$
- Space: $O(n)$