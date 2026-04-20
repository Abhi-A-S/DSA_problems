# Valid Parentheses

https://neetcode.io/problems/validate-parentheses/question?list=blind75

## Topics:
Two Pointers, String

## Recommended Time & Space Complexity

You should aim for a solution with O(n) time and O(n) space, where n is the length of the given string. 

## Solutions
### Solution 1: using stacks [optimal]
ex:- s = "([{}])" ans: true

idea:- poping the opening braces when we get a closing brace

- iterate over the string
- if the brace is opening ie (, [, { push it to the stack
- if the brace is closing ie ), ], } check if the top is of the same type, ie ( - ), [ - ], { - }
- if it is same, pop the top element


#### Complexity
- Time: $O(n)$
- Space: $O(n)$