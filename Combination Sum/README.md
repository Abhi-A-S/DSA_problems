# Combination Sum
https://neetcode.io/problems/combination-target-sum/question?list=blind75

## Topics
Array, Backtracking

## Recommended Time & Space Complexity
You should aim for a solution with O(2^(t/m)) time and O(t/m) space, where t is the given target and m is the minimum value in the given array. 

## Solutions
### Solution 1: using backtracking [optimal]
Input:
nums = [2,5,6,9]
target = 9

Output: [[2,2,5],[9]]

main idea: using backtracking

- start with the first element
- check all the combinations from it, which will reach the target
- using decision trees approach, find the combination of elements that add up to less than or equal to target
- for the second decision tree branch, we will not include the first element
- so on for all the combinations to get to the target


#### Complexity
- Time: $O(2^{t/m})$
- Space: $O(t/m)$