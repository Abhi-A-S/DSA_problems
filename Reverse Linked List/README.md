# Reverse Linked List
https://neetcode.io/problems/reverse-a-linked-list/question?list=blind75

## Topics:
Linked List, Recursion

## Recommended Time & Space Complexity

You should aim for a solution with O(n) time and O(1) space, where n is the length of the given list.


## Solutions
### Solution 1: using two pointer [optimal]
Input: linked list = [1, 2, 3, 4, 5]
output: [5, 4, 3, 2, 1]

- create a pointer to the previous element, initailize it to NULL
- save the next node to a temporary variable
- update the current node to point to the previous node
- go to the next node using the temporaty varible

#### Complexity
- Time: $O(n)$
- Space: $O(1)$