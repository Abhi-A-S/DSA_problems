# Maximum Product Subarray
https://neetcode.io/problems/maximum-product-subarray/question?list=blind75

## Topics
Array, Dynamic Programming

## Recommended Time & Space Complexity
You should aim for a solution with O(n) time and O(1) space, where n is the size of the input array. 

## Solutions
### Solution 1: using DP [optimal]
Input: nums = [2,4,-3,5]

Output: 8

Explanation: [2,4] has the largest product 8.

- to find the max product sub array, we can split the entire array into a sub problem
- ie for array[0...n] we can reduce this to a sub problem of array[0...n-1]
- to solve this, we take two products, maximum product and minimum product of the sub problem
- ie, largest will be positive and smallest will be negative
- so next coming elements will be multiplied appropriately for this
- if the n is positive, we will use the formulae, max = max * n, min = min * n
- if the n is negative, we will use the formulae, max = min * n, min = max * n
- hence we iterate over the array and get our element
- when we encounter a 0, we will take it and multiply it
- but then we reset the min and max into 1 and -1 for the next coming elements


#### Complexity
- Time: $O(n)$
- Space: $O(1)$