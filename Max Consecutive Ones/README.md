# Max Consecutive Ones
https://neetcode.io/problems/max-consecutive-ones/question?list=allNC

## Topics:
Array

## Solutions
### Solution 1: using single pointer and counter [optimal]
Example 1:

Input: nums = [1,1,0,1,1,1]

Output: 3

- iterate over the nums array
- if the number is 1 then we increment a counter
- if the number is not 1 then we reset the counter
- increment the max when ever the counter is over the previous one