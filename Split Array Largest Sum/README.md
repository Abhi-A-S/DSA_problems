# Split Array Largest Sum
https://neetcode.io/problems/split-array-largest-sum/question?list=neetcode250


## Topics:
Arrays, Binary Search, Dynamic Programming, Greedy, Prefix Sum

## Solutions
### Solution 1: using binary search [optimal approach]
Example 1:

Input: nums = [2,4,10,1,5], k = 2

Output: 16

Explanation: The best way is to split into [2,4,10] and [1,5], where the largest sum among the two subarrays is only 16.

- the smallest sum will be equal to the largest element in the array, and the largest sum will always be the sum of all elements
- from the above we can see that the solution lies somewhere in between those two values
- hence we can use a binary search algorithm on the sums to find the optimal split
- left = minimum, right = maximum, mid = (left + right) / 2
- now to test the mid value, we must see if there is a way to split the array into k parts so that the sum is less than or equal to mid
- if it is we found ourselves a new minimum
- the splitting array is done using a greedy algorithm
- if not then we update the maximum value


the greedy algorithm works as follows
- it takes the mid value and compares the array elements with it
- it starts from the first index, and added the next element if the sum is less than mid
- if the sum goes over mid, then we take the next coming elements into a new sub array
