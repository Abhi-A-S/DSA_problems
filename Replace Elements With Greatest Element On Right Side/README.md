# Replace Elements With Greatest Element On Right Side
https://neetcode.io/problems/replace-elements-with-greatest-element-on-right-side/question?list=allNC

## Topics:
Array

## Solutions
### Solution 1: using postfix array [optimal]
Input: arr = [2,4,5,3,1,2]

Output: [5,5,3,2,2,-1]

idea:- using postfix array concept we find the largest on the right side
- starting with the max element as -1
- iterating over the array in reverse order
- take the current element into a temp variable
- assign the current element as the max element so far
- if the temp value is larger than max, update it and go to the next iteration

#### Complexity
- Time: $O(n)$
- Space: $O(1)$