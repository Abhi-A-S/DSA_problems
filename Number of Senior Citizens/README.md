# Number of Senior Citizens
https://neetcode.io/problems/number-of-senior-citizens/question?list=allNC

## Topics:
Array, String

## Solutions
### Solution 1: using string to int conversion [optimal]
Example 1:

Input: details = ["7868190130M7522","5303914400F9211","9273338290F4010"]

Output: 2

Explanation: The passengers at indices 0, 1, and 2 have ages 75, 92, and 40. Thus, there are 2 people who are over 60 years old.

- initialize a counter variable
- iterate over the detail array
- take the character values from indices 11 and 12
- convert them into int
- if the interger is greater than 60 then they are a senior citizen
- increment the counter varible