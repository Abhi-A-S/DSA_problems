# Daily Temperatures
https://neetcode.io/problems/daily-temperatures/question?list=neetcode150

## Topics:
Array, Stack, Monotonic Stack

## Recommended Time & Space Complexity

You should aim for a solution as good or better than O(n) time and O(n) space, where n is the size of the input array. 

## Solutions
### Solution 1: using stack to hold the tempratures in monotonically decreasing order [optimal]
Input: temperatures = [30,38,30,36,35,40,28]
Output: [1,4,1,2,1,0,0]

- initialize a stack to hold the tempratures
- iterate over the tempratures array
- check if the temp is lower than the top of stack
- if so, then push it to the stack
- if not, pop the top element, the difference between the index of the temp and stack top is the days before a warmer temprature
- do this until the tempratures array is exhausted
- for the tempratures with no day og higher tempratures, put 0


#### Complexity
- Time: $O(n)$
- Space: $O(n)$