# Maximum Subarray
https://neetcode.io/problems/maximum-subarray/question?list=blind75

## Topics
Array, Divide and Conquer, Dynamic Programming

## Recommended Time & Space Complexity
You should aim for a solution with O(n) time and O(1) space, where n is the size of the input array. 

## Solutions
### Solution 1: using DP [optimal]
Example 1:

Input: nums = [2,-3,4,-2,2,1,-1,4]

Output: 8

Explanation: The subarray [4,-2,2,1,-1,4] has the largest sum 8.

- since for maximum value, the value needs to be positive, so if we get a negative value we can ignore it based on the neighbouring elements
- hence the sub array needs to start and end on a positive number to be maximum
- we start with the first element and add it into the sub array sum
- we then go to the next element, we check if adding the next element will make the sum negative
- if so we stop the sub array there, and make the next element into the start of the sub array
- we do this until adding the next element keeps the sum positive
- if the current sum is max, we set it as the result and continue iterating


#### Complexity
- Time: $O(n)$
- Space: $O(1)$