# Search a 2D Matrix
https://neetcode.io/problems/search-2d-matrix/question?list=neetcode150


## Topics:
Arrays, Binary Search


## Recommended Time & Space Complexity
You should aim for a solution with O(nlogm) time and O(1) space, where n is the size of the input array, and m is the maximum value in the array. 
 

## Solutions
### Solution 1: using binary search [optimal approach]
Example 1:

Input: piles = [1,4,3,2], h = 9

Output: 2

Explanation: With an eating rate of 2, you can eat the bananas in 6 hours. With an eating rate of 1, you would need 10 hours to eat all the bananas (which exceeds h=9), thus the minimum eating rate is 2.


- the minimum value k can be is 1, and the maximum value for k can be is max(piles)
- this provies us with a range of solutions
- we can find the k based on the amount of time from this
- we apply binary search to find the minimum k based on this
- to see if the pile can be eaten in h time using that k
- we remove elements one at a time by comparing the piles[i] and k values
- we do this until the h is exceeded, if so we change the left pointer
- similiarly we change the right pointer is h is not exceeded

#### Complexity
- Time: $O(n \log m)$
- Space: $O(1)$
