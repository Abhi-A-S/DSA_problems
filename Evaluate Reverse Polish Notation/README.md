# Evaluate Reverse Polish Notation

https://neetcode.io/problems/evaluate-reverse-polish-notation/question?list=neetcode150

## Topics:
Stack, Design

## Recommended Time & Space Complexity

You should aim for a solution with O(n) time and O(n) space, where n is the size of the input array. 

## Solutions
### Solution 1: using stack to convert postfix notation to infix [optimal]
Input: tokens = ["2","1","+","3","*"]
Output: 5
Explanation: ((1 + 2) * 3) - 4 = 5

- initailize a stack to hold the operators
- iterate over the input
- if the element is not an operator, push it to the stack and continue
- if the element is an operator, pop and take the last 2 elements from the stack
- evaluate the operation
- do this until the input is finished
- return the last element from the stack


#### Complexity
- Time: $O(n)$
- Space: $O(n)$