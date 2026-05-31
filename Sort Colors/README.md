# Sort Colors
https://neetcode.io/problems/sort-colors/question?list=neetcode250

## Topics:
Array, Divide and Conquer, Sorting, Heap (Priority Queue), Merge Sort, Bucket Sort, Radix Sort, Counting Sort

## Recommended Time & Space Complexity

You must solve the problem without using any built-in functions in O(nlog(n)) time complexity and with the smallest space complexity possible. 


## Solutions
### Solution 1: using bucket sort [optimal]
Input: nums = [1,0,1,2]

Output: [0,1,1,2]

- go thorough the array and find the counts of each element
- then substitute the elements into the array 
- repeat this until their count becomes zero

#### Complexity
- Time: $O(n)$
- Space: $O(1)$

### Solution 2: using quick sort partitioning [optimal]
Input: nums = [1,0,1,2]

Output: [0,1,1,2]

- use two pointers, low to point to the beginning of the array (for zeros), high to point to the end of the array(for twos)
- using the quicksort swapping method
- iterate over the array using varible i
- if i is zero, swap it with low, and increment low
- if i is two, swap it with high, and decrement high
- by vitue 1s will end up in the middle

#### Complexity
- Time: $O(n)$
- Space: $O(1)$